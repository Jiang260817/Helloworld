#include "stdio.h"
#include "math.h"
int main()
{
	int x, y;
	int m, n, r;
	scanf("%d,%d", &x, &y);
	m = abs(x); n = abs(y);
	if (m < n)
	{
		r = m; m = n; n = r;
	}
	r = n;
	while (r > 1)
		if (m % r == 0 && n % r == 0) break;
		else r--;
	printf("穷举法求最大公约数:%d\n", r);
	if (m < n)
	{
		r = m; m = n; n = r;
	}
	do
	{
		r = m % n;
		m = n;
		n = r;
	} while (r != 0);
	printf("辗转相除法求最大公约数:%d\n", m);
	printf("最小公倍数:%d\n", abs(x) * abs(y) / m);
	return 0;
}
