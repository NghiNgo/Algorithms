// A Simple C++ program to check if two sets are disjoint
#include <bits/stdc++.h>
using namespace std;

// Returns true if set1[] and set2[] are disjoint, else false
bool areDisjoint(int set1[], int set2[], int m, int n)
{
    // Sort the given two sets
    sort(set1, set1 + m);
    sort(set2, set2 + n);

    // Check for same elements using merge like process
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (set1[i] < set2[j])
            i++;
        else if (set2[j] < set1[i])
            j++;
        else /* if set1[i] == set2[j] */
            return false;
    }

    return true;
}

// Driver program to test above function
int main()
{
    int set1[] = {12, 34, 11, 9, 3};
    int set2[] = {7, 2, 1, 5};
    int m = sizeof(set1) / sizeof(set1[0]);
    int n = sizeof(set2) / sizeof(set2[0]);
    areDisjoint(set1, set2, m, n) ? cout << "Yes" : cout << " No";

    cout << endl;
    system("pause");
    return 0;
}
