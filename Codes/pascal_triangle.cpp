#include <iostream>
#include <vector>

using namespace std;

void printPascalTriangle(int n) {
    vector<vector<int>> pascal(n, vector<int>(n, 0));
    for (int line = 0; line < n; ++line) {
        for (int i = 0; i <= line; ++i) {
            if (i == 0 || i == line) {
                pascal[line][i] = 1;
            } else {
                pascal[line][i] = pascal[line - 1][i - 1] + pascal[line - 1][i];
            }
            cout << pascal[line][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printPascalTriangle(n);
    return 0;
}
