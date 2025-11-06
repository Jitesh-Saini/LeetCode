// [1365] How Many Numbers Are Smaller Than the Current Number

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    count++;
                }
            }
            ans.push_back(count);
            count = 0;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {8, 1, 2, 2, 3}; // Example input

    vector<int> result = sol.smallerNumbersThanCurrent(nums);

    cout << "Result: ";
    for (int x : result)
        cout << x << " ";
    cout << endl;

    return 0;
}


// without function:

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> nums = {8, 1, 2, 2, 3}; // Example input
//     vector<int> ans;
//     int count = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = 0; j < nums.size(); j++) {
//             if (nums[j] < nums[i]) {
//                 count++;
//             }
//         }
//         ans.push_back(count);
//         count = 0;
//     }

//     cout << "Result: ";
//     for (int x : ans)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }
