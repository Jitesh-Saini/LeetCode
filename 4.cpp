// [2011] Final Value of Variable After Performing Operations

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (auto x : operations) {
            if (x == "X++" || x == "++X")
                ans++;
            else
                ans--;
        }
        return ans;
    }
};

int main() {
    Solution sol;
    vector<string> operations = {"--X", "X++", "X++"}; // Example input

    int result = sol.finalValueAfterOperations(operations);
    cout << "Final Value: " << result << endl;

    return 0;
}


// without function:

// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// int main() {
//     vector<string> operations = {"--X", "X++", "X++"}; // Example input
//     int ans = 0;

//     for (auto x : operations) {
//         if (x == "X++" || x == "++X")
//             ans++;
//         else
//             ans--;
//     }

//     cout << "Final Value: " << ans << endl;
//     return 0;
// }
