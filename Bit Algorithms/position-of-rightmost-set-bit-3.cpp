// C++ implementation of above approach
#include <iostream>
#include <stdlib.h>
using namespace std;
#define INT_SIZE 32

int Right_most_setbit(int num)
{
    int pos = 1;
    // counting the position of first set bit
    for (int i = 0; i < INT_SIZE; i++)
    {
        if (!(num & (1 << i)))
            pos++;
        else
            break;
    }
    return pos;
}
int main()
{
    int num = 18;
    int pos = Right_most_setbit(num);
    cout << pos << endl;

    cout << endl;
    system("pause");
    return 0;
}