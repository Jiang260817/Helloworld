#include "stdio.h"
int main()
{
	unsigned int u, n, p, b, c, x, y, z;
	n = 0;
	for (u = 10000; u < 100000; u++)
	{
		b = u / 10000;
		c = ((u % 100000) % 10000) / 1000;
		x = (((u % 100000) % 10000) % 1000) / 100;
		y = ((((u % 100000) % 10000) % 1000) % 100) / 10;
		z = ((((u % 100000) % 10000) % 1000) % 100) % 10;
		if ((b + c + x + y + z) == 9 && (u % 5) == 0)
		n++;
	}
	printf("%d", n);
}
