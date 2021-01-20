// C++ program to print permutations
// of a given string with spaces.
#include <cstring>
#include <iostream>
#include <stdlib.h>
using namespace std;

/* Function recursively prints
the strings having space pattern.
i and j are indices in 'str[]' and
'buff[]' respectively */
void printPatternUtil(const char str[],
					char buff[], int i,
							int j, int n)
{
	if (i == n)
	{
		buff[j] = '\0';
		cout << buff << endl;
		return;
	}

	// Either put the character
	buff[j] = str[i];
	printPatternUtil(str, buff, i + 1, j + 1, n);

	// Or put a space followed by next character
	buff[j] = ' ';
	buff[j + 1] = str[i];

	printPatternUtil(str, buff, i + 1, j + 2, n);
}

// This function creates buf[] to
// store individual output string and uses
// printPatternUtil() to print all permutations.
void printPattern(const char* str)
{
	int n = strlen(str);

	// Buffer to hold the string
	// containing spaces
	// 2n - 1 characters and 1 string terminator
	char buf[2 * n];

	// Copy the first character as
	// it is, since it will be always
	// at first position
	buf[0] = str[0];

	printPatternUtil(str, buf, 1, 1, n);
}

// Driver program to test above functions
int main()
{
	const char* str = "ABCD";
	printPattern(str);

    cout << endl;
    system("pause");
	return 0;
}
