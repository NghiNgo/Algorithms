// C++ program to count substrings with recursive sum equal to 9
#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int count9s(char number[])
{
	int count = 0; // To store result
	int n = strlen(number);

	// Consider every character as beginning of substring
	for (int i = 0; i < n; i++)
	{
		int sum = number[i] - '0'; //sum of digits in current substring

		if (number[i] == '9') count++;

		// One by one choose every character as an ending character
		for (int j = i+1; j < n; j++)
		{
			// Add current digit to sum, if sum becomes multiple of 5
			// then increment count. Let us do modular arithmetic to
			// avoid overflow for big strings
			sum = (sum + number[j] - '0')%9;

			if (sum == 0)
			count++;
		}
	}
	return count;
}

// driver program to test above function
int main()
{
	cout << count9s("4189") << endl;
	cout << count9s("1809");

    cout << endl;
    system("pause");
	return 0;
}
