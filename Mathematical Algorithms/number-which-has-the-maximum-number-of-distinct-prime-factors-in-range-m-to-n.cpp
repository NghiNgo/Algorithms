// C++ program to print the
// Number which has the maximum number
// of distinct prime factors of
// numbers in range m to n
#include <bits/stdc++.h>
using namespace std;

// Function to return the maximum number
int maximumNumberDistinctPrimeRange(int m, int n)
{
	// array to store the number of distinct primes
	long long factorCount[n + 1];

	// true if index 'i' is a prime
	bool prime[n + 1];

	// initializing the number of factors to 0 and
	for (int i = 0; i <= n; i++) {
		factorCount[i] = 0;
		prime[i] = true; // Used in Sieve
	}

	for (int i = 2; i <= n; i++) {

		// condition works only when 'i' is prime,
		// hence for factors of all prime number,
		// the prime status is changed to false
		if (prime[i] == true) {

			// Number is prime
			factorCount[i] = 1;

			// number of factor of a prime number is 1
			for (int j = i * 2; j <= n; j += i) {

				// incrementing factorCount all
				// the factors of i
				factorCount[j]++;

				// and changing prime status to false
				prime[j] = false;
			}
		}
	}

	// Initialize the max and num
	int max = factorCount[m];
	int num = m;

	// Gets the maximum number
	for (int i = m; i <= n; i++) {

		// Gets the maximum number
		if (factorCount[i] > max) {
			max = factorCount[i];
			num = i;
		}
	}
	return num;
}

// Driver code
int main()
{
	int m = 4, n = 6;
	// Calling function
	cout << maximumNumberDistinctPrimeRange(m, n);

    cout << endl;
    system("pause");
	return 0;
}
