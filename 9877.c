//9877~9878

#include "stdio.h"
int main()
{
	int m, n, p;

	m=6;n=1;
	for (;m > 0; m--)
		n = 2 * (n+1);
	printf("%d",n);
}
