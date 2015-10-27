#include<stdio.h>
int reverse(long int);
int reverse(long int n)
{
    long int n1,b,rev=0;
    n1=n;
    while(n1!=0)
    {
      b=n1%10;
      rev=rev*10+b;
      n1=n1/10;
    }
    return rev;
}
int main()
{
    long int N,a,b,x,y,sum=0,rev_sum=0;
    scanf("%ld",&N);
    while(N--)
    {
        scanf("%ld %ld",&a,&b);
        x=reverse(a);
        y=reverse(b);
        sum=x+y;
        rev_sum=reverse(sum);
        printf("%ld\n",rev_sum);
    }
    return 0;
}
