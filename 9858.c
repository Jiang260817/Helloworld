#include "stdio.h"
int main()
{
	int a, i, k;
	for (a = 1; a < 6; a++)
	{
		for (i = 5; i > a-1; i--)
			printf(" ");
		for (k = 0; k <(2*a)-1; k++)
			printf("%c",a+'A'-1);
		printf("\n");
	}
	for (a = 6; a<11; a++)
	{
		for (i = 0; i <a-5; i++)
			printf(" ");
		for (k = 1; k <10-2*(a-6); k++)
			printf("%c", -a + 'A' +10);
		printf("\n");
	}

}
