#include "stdio.h"
int main()
{
	int a, i, k;
	for (a = 1; a < 11; a++)
	{
		for (i = 1; i < a+1; i++)
			printf(" ");
		for (k = 10; k >(a-1); k--)
			printf("*");
		printf("\n");
	}

}
