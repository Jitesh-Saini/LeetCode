// [1920] Build Array from Permutation

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            ans[i] = nums[nums[i]];
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 2, 1, 5, 3, 4}; // Example input

    vector<int> ans = sol.buildArray(nums);

    cout << "Result: ";
    for (int x : ans)
        cout << x << " ";
    cout << endl;

    return 0;
}



// without function:

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> nums = {0, 2, 1, 5, 3, 4}; // Example input
//     vector<int> ans(nums.size());

//     for (int i = 0; i < nums.size(); i++) {
//         ans[i] = nums[nums[i]];
//     }

//     cout << "Result: ";
//     for (int x : ans)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }
