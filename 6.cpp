// [1512] Number of Good Pairs

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 1, 1, 3}; // Example input

    int result = sol.numIdenticalPairs(nums);

    cout << "Number of Good Pairs: " << result << endl;

    return 0;
}


// without function:    

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> nums = {1, 2, 3, 1, 1, 3}; // Example input
//     int count = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         for (int j = i + 1; j < nums.size(); j++) {
//             if (nums[i] == nums[j]) {
//                 count++;
//             }
//         }
//     }

//     cout << "Number of Good Pairs: " << count << endl;

//     return 0;
// }
