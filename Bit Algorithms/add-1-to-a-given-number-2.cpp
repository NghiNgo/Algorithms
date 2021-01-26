#include <bits/stdc++.h>
using namespace std;

int addOne(int x)
{
	return (-(~x));
}

/* Driver code*/
int main()
{
	cout<<addOne(13);

    cout << endl;
    system("pause");
	return 0;
}
