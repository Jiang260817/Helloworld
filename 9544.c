#include "stdio.h"
int  main()
{
	int x, y;
	float z1, z2, z3, z4,a,b;

	scanf("%d,%d", &x, &y);
	a=(float)x;
	b=(float)y;
	z1 = x + y;
	z2 = x - y;
	z3 = x * y;
	z4 = a /b;
	printf("x+y=%.0f\nx-y=%.0f\n", z1, z2);
	printf("x*y=%.0f\nx/y=%.2f\n", z3, z4);
}
