// [2413] Smallest Even Multiple

#include <iostream>
using namespace std;

class Solution
{
public:
    int smallestEvenMultiple(int n)
    {
        if (n % 2 == 0) return n;
        else return n * 2;
    }
};

int main()
{
    Solution sol;
    int n = 5; // Example input

    int result = sol.smallestEvenMultiple(n);
    cout << "Smallest Even Multiple of " << n << " is " << result << endl;

    return 0;
}


// without function:

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Example input
//     int result;

//     if (n % 2 == 0)
//         result = n;
//     else
//         result = n * 2;

//     cout << "Smallest Even Multiple of " << n << " is " << result << endl;

//     return 0;
// }
