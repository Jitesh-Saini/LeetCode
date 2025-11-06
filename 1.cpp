// [1480] Running Sum of 1d Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;    
        int sum = 0;
        for (auto x : nums) {
            sum += x;           
            result.push_back(sum); 
        }
        return result;          
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3, 4}; // Example input

    vector<int> ans = sol.runningSum(nums);

    cout << "Running Sum: ";
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
//     vector<int> nums = {1, 2, 3, 4}; // Example input

//     vector<int> result;
//     int sum = 0;

//     for (auto x : nums) {
//         sum += x;
//         result.push_back(sum);
//     }

//     cout << "Running Sum: ";
//     for (int x : result)
//         cout << x << " ";
//     cout << endl;

//     return 0;
// }
