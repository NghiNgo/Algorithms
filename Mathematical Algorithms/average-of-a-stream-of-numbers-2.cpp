#include <bits/stdc++.h>
using namespace std;

// Returns the new average after including x
float getAvg(int x)
{
	static int sum, n;

	sum += x;
	return (((float)sum) / ++n);
}

// Prints average of a stream of numbers
void streamAvg(float arr[], int n)
{
	float avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg = getAvg(arr[i]);
		cout << "Average of " << i+1 <<" numbers is "<< fixed<<setprecision(1) << avg << endl;
	}
	return;
}

// Driver code
int main()
{
	float arr[] = { 10, 20, 30, 40, 50, 60 };
	int n = sizeof(arr) / sizeof(arr[0]);
	streamAvg(arr, n);

    cout << endl;
    system("pause");
	return 0;
}
