#include <stdio.h>
#include <stdlib.h>

/* Function to reverse bits of num */
unsigned int reverseBits(unsigned int num)
{
    unsigned int NO_OF_BITS = sizeof(num) * 8;
    unsigned int reverse_num = 0, i, temp;

    for (i = 0; i < NO_OF_BITS; i++)
    {
        temp = (num & (1 << i));
        if (temp)
            reverse_num |= (1 << ((NO_OF_BITS - 1) - i));
    }

    return reverse_num;
}

// Modified code to be optimized by removing the use of variable temp
// unsigned int reverseBits(unsigned int num)
// {
//     unsigned int  NO_OF_BITS = sizeof(num) * 8;
//     unsigned int reverse_num = 0;
//     int i;
//     for (i = 0; i < NO_OF_BITS; i++)
//     {
//         if((num & (1 << i)))
//             reverse_num |= 1 << ((NO_OF_BITS - 1) - i);
//     }
//     return reverse_num;
// }

/* Driver function to test above function */
int main()
{
    unsigned int x = 2;
    printf("%u", reverseBits(x));

    printf("\n");
    system("pause");
    return 0;
}
