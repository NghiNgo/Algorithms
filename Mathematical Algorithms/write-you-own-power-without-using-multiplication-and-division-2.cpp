#include<bits/stdc++.h>
using namespace std;

/* A recursive function to get x*y */
int multiply(int x, int y)
{
	if(y)
		return (x + multiply(x, y - 1));
	else
		return 0;
}

/* A recursive function to get a^b
Works only if a >= 0 and b >= 0 */
int pow(int a, int b)
{
	if(b)
		return multiply(a, pow(a, b - 1));
	else
		return 1;
}

// Driver Code
int main()
{
	cout << pow(5, 3);

    cout << endl;
    system("pause");
	return 0;
}
