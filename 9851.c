#include "stdio.h"
int main()
{
	int a, i,k;
	for (a = 1; a < 6; a++)
	{
		for (i = 0; i<a; i++)
		printf(" ");
		for (k= 7; k>2*(a-2); k--)    //有点问题但结果正确
			printf("*");
		printf("\n");
	}

}
