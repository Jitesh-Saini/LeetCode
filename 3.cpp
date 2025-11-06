// [1929] Concatenation of Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for (auto x : nums)
            ans.push_back(x);
        for (auto x : nums)
            ans.push_back(x);
        return ans;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 1}; // Example input

    vector<int> result = sol.getConcatenation(nums);

    cout << "Concatenated Array: ";
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
//     vector<int> nums = {1, 2, 1}; // Example input
//     vector<int> ans;

//     for (auto x : nums)
//         ans.push_back(x);
//     for (auto x : nums)
//         ans.push_back(x);

//     cout << "Concatenated Array: ";
//     for (int x : ans)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }
