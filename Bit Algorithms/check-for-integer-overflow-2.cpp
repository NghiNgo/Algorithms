#include <bits/stdc++.h>
using namespace std;

int addOvf(int *result, int a, int b)
{
    if (a > INT_MAX - b)
        return -1;
    else
    {
        *result = a + b;
        return 0;
    }
}

int main()
{
    int *res = new int[(sizeof(int))];
    int x = 2147483640;
    int y = 10;

    cout << addOvf(res, x, y) << endl;
    cout << *res;

    cout << endl;
    system("pause");
    return 0;
}
