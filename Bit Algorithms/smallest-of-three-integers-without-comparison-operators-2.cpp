// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;
#define CHAR_BIT 8

/*Function to find minimum of x and y*/
int min(int x, int y)
{
	return y + ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1)));
}

/* Function to find minimum of 3 numbers x, y and z*/
int smallest(int x, int y, int z)
{
	return min(x, min(y, z));
}

// Driver code
int main()
{
	int x = 12, y = 15, z = 5;
	cout << "Minimum of 3 numbers is " << smallest(x, y, z);

    cout << endl;
    system("pause");
	return 0;
}
