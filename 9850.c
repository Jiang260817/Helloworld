#include "stdio.h"
#include "math.h"
int main()
{
	double x, y, z;
	scanf("%lf", &z);
	y=x=z;
	do 
	{
		x = y;
		y = 0.5 * (x + (z/x));
	} 	
	while ((x - y) >= 0.000001|| (y-x) >= 0.000001);

	printf("sqar of x is:%.3lf", y);
	return 0;
}
