// [1470] Shuffle the Array


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int i = 0, j = n;
        while (j < nums.size()) {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j++;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 5, 1, 3, 4, 7}; // Example input
    int n = 3;

    vector<int> result = sol.shuffle(nums, n);

    cout << "Shuffled Array: ";
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
//     vector<int> nums = {2, 5, 1, 3, 4, 7}; // Example input
//     int n = 3;

//     vector<int> ans;
//     int i = 0, j = n;

//     while (j < nums.size()) {
//         ans.push_back(nums[i]);
//         ans.push_back(nums[j]);
//         i++;
//         j++;
//     }

//     cout << "Shuffled Array: ";
//     for (int x : ans)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }


