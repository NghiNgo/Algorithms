#include <iostream>
using namespace std;

// Function to print first k digits after dot in value
// of 1/n. n is assumed to be a positive integer.
void print(int n, int k)
{
    int rem = 1; // Initialize remainder

    // Run a loop k times to print k digits
    for (int i = 0; i < k; i++)
    {
        // The next digit can always be obtained as
        // doing (10*rem)/10
        cout << (10 * rem) / n;

        // Update remainder
        rem = (10 * rem) % n;
    }
}

// Driver program to test above function
int main()
{
    int n = 7, k = 3;
    print(n, k);
    cout << endl;

    n = 21, k = 4;
    print(n, k);

    cout << endl;
    system("pause");
    return 0;
}
