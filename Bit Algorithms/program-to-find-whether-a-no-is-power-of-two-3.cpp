// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;

// Function which checks whether a
// number is a power of 2
bool powerOf2(int n)
{
    // base cases
    // '1' is the only odd number
    // which is a power of 2(2^0)
    if (n == 1)
        return true;

    // all other odd numbers are not powers of 2
    else if (n % 2 != 0 || n == 0)
        return false;

    // recursive function call
    return powerOf2(n / 2);
}

// Driver Code
int main()
{
    int n = 64; //True
    int m = 12; //False

    if (powerOf2(n) == 1)
        cout << "True" << endl;

    else
        cout << "False" << endl;

    if (powerOf2(m) == 1)
        cout << "True" << endl;

    else
        cout << "False" << endl;

    cout << endl;
    system("pause");
    return 0;
}
