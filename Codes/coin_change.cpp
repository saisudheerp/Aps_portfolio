#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= amount; ++i) {
        for (int coin : coins) {
            if (i - coin >= 0 && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }
    return dp[amount] == INT_MAX ? -1 : dp[amount];
}

int main() {
    vector<int> medications = {1, 3, 5};
    int requiredDosage = 11;

    int result = coinChange(medications, requiredDosage);
    if (result != -1) {
        cout << "Minimum number of medications: " << result << endl;
    } else {
        cout << "It's not possible to achieve the required dosage with the given medications." << endl;
    }

    return 0;
}
