// C++ program to check
// if given number is
// power of 4 or not
#include<bits/stdc++.h>

using namespace std;

float logn(int n, int r)
{
	return log(n) / log(r);
}

bool isPowerOfFour(int n)
{
	//0 is not considered as a power
	//of 4
	if(n == 0)
		return false;
	return floor(logn(n,4))==ceil(logn(n,4));
}

/*Driver code*/
int main()
{
	int test_no = 64;
	if(isPowerOfFour(test_no))
		cout << test_no << " is a power of 4" ;
	else
		cout << test_no << " is not a power of 4";

    cout << endl;
    system("pause");
	return 0;
}
