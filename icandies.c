#include<stdio.h>
int main()
{
int i,j,k,t,num;
//	printf("Enter no test cases ");
scanf("%d",&t);
for(i=1;i<=t;i++)
{
//	printf("Enter no ");
scanf("%d",&num);
if(num%3==0)
{
num=num-5;
}
while(num%3!=0)
{
num=num-5;
}
if(num>0)
printf("Case %d: %d\n",i,num);
else
printf("Case %d: -1\n",i);
}
return 0;
}
