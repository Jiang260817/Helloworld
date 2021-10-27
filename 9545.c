#include <stdio.h>
int main()
{
char c1,c2; 
int m;
scanf("%c%c",&c1,&c2); 
m=((c1-'0') * 10 + (c2-'0')) * 10; 
printf("the result is:%d\n",m); 
}
