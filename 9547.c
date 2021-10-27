#include "stdio.h"
int  main()
{
	unsigned long int a=40000;
	int hh, mm, ss;

	hh = a / 3600;
	mm = (a - 3600 * hh) / 60;
	ss = (a - 3600 * hh) % 60;
	printf("%d:%d:%d",hh,mm,ss);

	return 0;
}
