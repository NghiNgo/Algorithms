//C++ program to swap two numbers.
//Including header file.
#include <bits/stdc++.h>
using namespace std;

//Function to swap the numbers.
void swap(int &a, int &b)
{
    //same as a = a + b
    a = (a & b) + (a | b);

    //same as b = a - b
    b = a + (~b) + 1;

    //same as a = a - b
    a = a + (~b) + 1;
}

//Driver Code
int main()
{
    int a = 5, b = 10;

    //Function Call
    swap(a, b);

    cout << "After swapping: a = " << a << ", b = " << b;

    cout << endl;
    system("pause");
    return 0;
}
