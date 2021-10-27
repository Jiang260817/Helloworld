#include "stdio.h"
int main(void)
{
  char a,b;
  int c;
  
  a=getchar();
  b=getchar();
  c=(a-48)*100+(b-48)*10;
  printf("the result is:%d",c);
}
