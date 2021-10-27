#include "stdio.h"
int  main()
{
	unsigned long int a;
	int hh, mm, ss;
                
                scanf("%d",&a);
	hh = a / 3600;
	mm = (a - 3600 * hh) / 60;
	ss = (a - 3600 * hh) % 60;
	printf("%d:%d:%d",hh,mm,ss);

	return 0;
}
