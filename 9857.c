#include "stdio.h"
int main()
{
	int a, i, k;
	for (a = 1; a < 6; a++)
	{
		for (i = 16; i > a-1; i--)
			printf(" ");
		for (k = 1; k <2*a; k=k+2)
			printf("%d",k);
		printf("\n");
	}
	for (a = 6; a < 11; a++)
	{
		for (i = 10; i >2*(a-6); i--)
			printf(" ");
		for (k = 1; k < 2 * a; k = k + 2)
			printf("%d", k);
		printf("\n");
	}

}
