#include "stdio.h"
int main()
{
	int m, n, p;

	scanf("%d,%d", &m, &n);
	for (;m > 0; m--)
		n = 2 * (n+1);
	printf("%d",n);
}
