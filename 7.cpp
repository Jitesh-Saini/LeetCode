// [1672] Richest Customer Wealth

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans = 0;
        for (auto x : accounts) {
            int sum = 0;
            for (auto y : x) {
                sum += y;
            }
            if (sum > ans) {
                ans = sum;
            }
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {3, 2, 1}
    }; // Example input

    int result = sol.maximumWealth(accounts);

    cout << "Richest Customer Wealth: " << result << endl;

    return 0;
}

// without function:

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<vector<int>> accounts = {
//         {1, 2, 3},
//         {3, 2, 1}
//     }; // Example input

//     int ans = 0;

//     for (auto x : accounts) {
//         int sum = 0;
//         for (auto y : x) {
//             sum += y;
//         }
//         if (sum > ans) {
//             ans = sum;
//         }
//     }

//     cout << "Richest Customer Wealth: " << ans << endl;

//     return 0;
// }
