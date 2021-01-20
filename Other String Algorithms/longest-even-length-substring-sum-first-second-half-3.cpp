// A O(n^2) time and O(n) extra space solution
#include<bits/stdc++.h>
using namespace std;

int findLength(string str, int n)
{
	int sum[n+1]; // To store cumulative sum from first digit to nth digit
	sum[0] = 0;

	/* Store cumulative sum of digits from first to last digit */
	for (int i = 1; i <= n; i++)
		sum[i] = (sum[i-1] + str[i-1] - '0'); /* convert chars to int */

	int ans = 0; // initialize result

	/* consider all even length substrings one by one */
	for (int len = 2; len <= n; len += 2)
	{
		for (int i = 0; i <= n-len; i++)
		{
			int j = i + len - 1;

			/* Sum of first and second half is same than update ans */
			if (sum[i+len/2] - sum[i] == sum[i+len] - sum[i+len/2])
				ans = max(ans, len);
		}
	}
	return ans;
}

// Driver program to test above function
int main()
{
	string str = "123123";
	cout << "Length of the substring is " << findLength(str, str.length());

    cout << endl;
    system("pause");
	return 0;
}
