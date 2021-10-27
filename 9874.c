/*输入值适用范围尚不明确，但不小于10的10次方
附：如何查询本机lld数据类型最大值
#include <iostream>
#include <climits>
using namespace std;
int main()
{
	long long ll_min = LLONG_MIN;
	long long ll_max = LLONG_MAX;
	unsigned long long ull_max = ULLONG_MAX;
	cout << "min of long long is " << ll_min << endl;
	cout << "max of long long is " << ll_max << endl;
	cout << "max of unsigneed long long is " << ull_max << endl;

	system("pause");
	return 0;
}


min of long long is-9223372036854775808
max of long long is9223372036854775807
max of unsigneed long long is18446744073709551615*/


include<stdio.h>
#include<math.h>
int main()
{
	unsigned long long int a, b = 0, c = 0; int p=1;
	long double f = 0;
	scanf("%lld", &a);
	for (p=50;p>=0;p--)
	{
		f = pow(10, p);
		b = (unsigned long long int)(a / f);
		if (b != 0)
		{
			break;
		}
	}
	for (; p >= 1; p--)
	{
		f = pow(10, p);
		b = (unsigned long long int)(a / f);
		switch(b)
		{
		case 1:printf("one,"); break;
		case 2:printf("two,"); break;
		case 3:printf("three,"); break;
		case 4:printf("four,"); break;
		case 5:printf("five,"); break;
		case 6:printf("six,"); break;
		case 7:printf("seven,"); break;
		case 8:printf("eight,"); break;
		case 9:printf("nine,"); break;
		case 0:printf("zero,"); break;
		}
		a = a - b * (unsigned long long int)f;
	}
		switch (a)
		{
		case 1:printf("one"); break;
		case 2:printf("two"); break;
		case 3:printf("three"); break;
		case 4:printf("four"); break;
		case 5:printf("five"); break;
		case 6:printf("six"); break;
		case 7:printf("seven"); break;
		case 8:printf("eight"); break;
		case 9:printf("nine"); break;
		case 0:printf("zero"); break;
		}
}
