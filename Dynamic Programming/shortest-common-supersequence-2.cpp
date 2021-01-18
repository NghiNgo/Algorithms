// A Naive recursive C++ program to find
// length of the shortest supersequence
#include <bits/stdc++.h>
using namespace std;

int superSeq(char* X, char* Y, int m, int n)
{
	if (!m)
		return n;
	if (!n)
		return m;

	if (X[m - 1] == Y[n - 1])
		return 1 + superSeq(X, Y, m - 1, n - 1);

	return 1
		+ min(superSeq(X, Y, m - 1, n),
				superSeq(X, Y, m, n - 1));
}

// Driver Code
int main()
{
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";
	cout << "Length of the shortest supersequence is "
		<< superSeq(X, Y, strlen(X), strlen(Y));

    cout << endl;
    system("pause");
	return 0;
}
