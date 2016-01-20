#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,n,sum=0;
        scanf("%d",&n);
        for(i=1;;i++)
        {
            sum+=i;
            if(sum>=n)
                break;
        }
        int temp=n-(sum-i);
        int total=i+1;
        if(i%2==0)
            printf("TERM %d IS %d/%d\n",n,temp,total-temp);
        else
            printf("TERM %d IS %d/%d\n",n,total-temp,temp);
    }
    return 0;
}

