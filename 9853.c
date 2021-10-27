#include "stdio.h"
int main()
{
	int a, i,k;
	for (a = 1; a < 6; a++)
	{
		for (i = 4; i>(a-2); i--)
		printf(" ");
		for (k=1 ; k<(2*a); k=k+2)
			printf("%d",k);
		printf("\n");
	}
}
