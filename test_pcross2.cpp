#include<stdio.h>
int main()
{
    int t;
    int m,n,ci,cj,i,j;
    int sum,sub;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&m,&n,&ci,&cj);
        sum=ci+cj;
        sub=ci-cj;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i+j==sum || i-j==sub)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
