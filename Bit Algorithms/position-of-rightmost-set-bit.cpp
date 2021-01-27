// C++ program for Position
// of rightmost set bit
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

class gfg
{

public:
    unsigned int getFirstSetBitPos(int n)
    {
        return log2(n & -n) + 1;
    }
};

// Driver code
int main()
{
    gfg g;
    int n = 12;
    cout << g.getFirstSetBitPos(n);

    cout << endl;
    system("pause");
    return 0;
}
