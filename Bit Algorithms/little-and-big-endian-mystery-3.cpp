#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char arr[2] = {0x01, 0x00};
	unsigned short int x = *(unsigned short int *) arr;
	printf("%d", x);

    printf("\n");
    system("pause");
	return 0;
}
