// C++ Program to Detect
// if two integers have opposite signs.
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool oppositeSigns(int x, int y)
{
    return ((x ^ y) < 0);
}

int main()
{
    int x = 100, y = -100;
    if (oppositeSigns(x, y) == true)
        printf("Signs are opposite");
    else
        printf("Signs are not opposite");

    printf("\n");
    system("pause");
    return 0;
}
