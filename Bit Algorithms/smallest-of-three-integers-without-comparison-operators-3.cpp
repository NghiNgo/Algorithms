// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;

// Using division operator to find
// minimum of three numbers
int smallest(int x, int y, int z)
{
	if (!(y / x)) // Same as "if (y < x)"
		return (!(y / z)) ? y : z;
	return (!(x / z)) ? x : z;
}

int main()
{
	int x = 78, y = 88, z = 68;
	cout << "Minimum of 3 numbers is " << smallest(x, y, z);

    cout << endl;
    system("pause");
	return 0;
}
