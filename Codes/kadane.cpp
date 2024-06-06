#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSubArraySum(vector<int>& nums) {
    int maxSoFar = nums[0], maxEndingHere = nums[0];

    for (size_t i = 1; i < nums.size(); ++i) {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main() {
    vector<int> healthMetrics = {1, -2, 3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum sum of health metrics: " << maxSubArraySum(healthMetrics) << endl;
    return 0;
}
