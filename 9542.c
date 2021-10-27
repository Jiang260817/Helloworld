//9542

#include<stdio.h>
int main()
{
int numA,numB,numC,numD,numE,sum,n,count=0;
for(n=10000;n<=99999;n++)
{
numA=n/10000;
numB=n%10000/1000;
numC=n%10000%1000/100;
numD=n%10000%1000%100/10;
numE=n%10000%1000%100%10;
sum=numA+numB+numC+numD+numE;
if((n%5==0)&&(sum==9))
{
count++;
}
}
printf("%d\n",count);
}
