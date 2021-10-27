#include <stdio.h>
#include<math.h>
int main()
{
	double capital,rate,interest,a;
	int year;
	
	scanf("%lf,%d,%lf", &capital,&year,&rate);
	a = 1 + rate;
	interest = (capital *pow(a,(double)year)-capital) * 0.8;
	printf("利息:%.0f",interest);
	return 0;
}
