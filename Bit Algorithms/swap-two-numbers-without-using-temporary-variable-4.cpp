#include <bits/stdc++.h>
using namespace std;
void swap(int *xp, int *yp)
{
    *xp = *xp ^ *yp;
    *yp = *xp ^ *yp;
    *xp = *xp ^ *yp;
}

// Driver code
int main()
{
    int x = 10;
    swap(&x, &x);
    cout << "After swap(&x, &x): x = " << x;

    cout << endl;
    system("pause");
    return 0;
}
