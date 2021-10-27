#include "stdio.h"
int  main()
{
	char a;

	scanf("%c", &a);
	printf("字符:% c\n前导字符:%c\n后续字符:%c", a, a - 1, a + 1);
}
