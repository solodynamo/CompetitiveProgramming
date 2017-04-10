#include<stdio.h>
int main()
{
    int testCases;
    scanf("%d",&testCases);
    while(testCases--)
    {
        long long n;
        scanf("%lld",&n);
        long long ans;
        ans=192+(n-1)*250;
        printf("%lld\n",ans);
    }
    return 0;
}
