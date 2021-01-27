// cpp implementation of recursive
// approach to find the number
// of set bits in binary representation
// of positive integer n
#include <bits/stdc++.h>
using namespace std;

// recursive function to count set bits
int countSetBits(int n)
{
	// base case
	if (n == 0)
		return 0;

	else

		// if last bit set add 1 else add 0
		return (n & 1) + countSetBits(n >> 1);
}

// driver code
int main()
{
	// get value from user
	int n = 9;

	// function calling
	cout << countSetBits(n);

    cout << endl;
    system("pause");
	return 0;
}
