#include<bits/stdc++.h>
#define ll long long
const int mod=(1e9)+7;
using namespace std;
bool isp[(int)1e6];
void sieve()
{
    for(int i=0;i<(int)1e6;i++)
    isp[i]=1;
    isp[0]=isp[1]=0;
    for(int i=2;i<(sqrt)(1e6);i++)
    {
        if(isp[i])
        for(int j=i*i;j<(int)1e6;j+=i)
        isp[j]=0;
    }
}
int main()
{
    sieve();
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n==0)
        {
            printf("1\n");
            continue;
        }
        long long res=1;
        for(int i=1;i<=n;i++)
        {
            int temp=n;
            int e=0;
            if(isp[i])
            {
                int j=i;
                int k=i;
                while((int)(temp/k))
                {
                    e+=temp/k;
                    k*=j;
                }
                res=(res%mod *(e+1)*mod)%mod;
            }
        }
        printf("%lld\n",res);
    }
    return 0;
}
