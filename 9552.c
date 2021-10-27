#include <stdio.h>
int main()
{
	float r, h, v;

	scanf("%f,%f", &r, &h);
	v = (3.14 * r * r * h)/3;
	printf("体积为:%.2f",v);
	return 0;
}
