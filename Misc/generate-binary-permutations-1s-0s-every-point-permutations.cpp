// C++ program to generate all permutations of 1's and 0's such that
// every permutation has more 1's than 0's at all indexes.
#include <iostream>
#include <cstring>
using namespace std;

// ones & zeroes --> counts of 1's and 0's in current string 'str'
// len ---> desired length of every permutation
void generate(int ones, int zeroes, string str, int len)
{
    // If length of current string becomes same as desired length
    if (len == str.length())
    {
        cout << str << " ";
        return;
    }

    // Append a 1 and recur
    generate(ones + 1, zeroes, str + "1", len);

    // If there are more 1's, append a 0 as well, and recur
    if (ones > zeroes)
        generate(ones, zeroes + 1, str + "0", len);
}

// Driver program to test above function
int main()
{
    string str = "";
    generate(0, 0, str, 4);

    cout << endl;
    system("pause");
    return 0;
}
