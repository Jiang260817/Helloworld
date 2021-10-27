//输入值适用范围尚不明确，但不小于10的10次方
//getchar()较scanf()更适合完成该任务

#include<stdio.h>
#include<math.h>
int main()
{
	long long int a, b = 0, c = 0; int p,q=1;      //确定输入多少个数，即长整型a的位数
	double f = 0;
	scanf("%lld", &a);
	for (p=20;p>=0;p--)
	{
		f = pow(10, p);
		b = (long long int)a / f;
		if (b != 0)
		{
			break;
		}
	}
  /*
  例：求158150的位数
  158150/10^20=0
  158150/10^19=0
  158150/10^18=0
  ……
  158150/10^6=0
  158150/10^5=1    求出158150的位数为5+1=6
  
  
  158150/100000=1  switch函数输出one
  58150/10000=5              输出five
  8150/1000=8                输出……
  150/100=1
  50/10=5
  0/1=0
  
  
  */
  
	for (; p >= 0; p--)
	{
		f = pow(10, p);
		b = (long long int)a / f;
		switch(b)
		{
		case 1:printf("one "); break;
		case 2:printf("two "); break;
		case 3:printf("three "); break;
		case 4:printf("four "); break;
		case 5:printf("five "); break;
		case 6:printf("six "); break;
		case 7:printf("seven "); break;
		case 8:printf("eight "); break;
		case 9:printf("nine "); break;
		case 0:printf("zero "); break;
		}
		a = a - b * f;
	}
}
