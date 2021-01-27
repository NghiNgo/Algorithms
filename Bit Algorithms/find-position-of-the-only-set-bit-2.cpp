// C++ program to find position of only set bit in a given number
#include <bits/stdc++.h>
using namespace std;

// A utility function to check whether n is power of 2 or not
int isPowerOfTwo(unsigned n)
{
    return n && (!(n & (n - 1)));
}

// Returns position of the only set bit in 'n'
int findPosition(unsigned n)
{
    if (!isPowerOfTwo(n))
        return -1;

    unsigned count = 0;

    // One by one move the only set bit to right till it reaches end
    while (n)
    {
        n = n >> 1;

        // increment count of shifts
        ++count;
    }

    return count;
}

// Driver code
int main(void)
{
    int n = 0;
    int pos = findPosition(n);
    (pos == -1) ? cout << "n = " << n << ", Invalid number\n" : cout << "n = " << n << ", Position " << pos << endl;

    n = 12;
    pos = findPosition(n);
    (pos == -1) ? cout << "n = " << n << ", Invalid number\n" : cout << "n = " << n << ", Position " << pos << endl;

    n = 128;
    pos = findPosition(n);
    (pos == -1) ? cout << "n = " << n << ", Invalid number\n" : cout << "n = " << n << ", Position " << pos << endl;

    cout << endl;
    system("pause");
    return 0;
}
