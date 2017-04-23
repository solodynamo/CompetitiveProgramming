#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,ppl;
        scanf("%d",&ppl);
        int men[ppl],women[ppl];
        for(i=0;i<ppl;i++)
            scanf("%d",&men[i]);
        for(i=0;i<ppl;i++)
            scanf("%d",&women[i]);
        // idea to sort is that multiply max with max value so that hotness is max
        sort(men,men+ppl);
        sort(women,women+ppl);
        long long ans=0;
        for(i=0;i<ppl;i++)
            ans+=men[i]*women[i];
        printf("%d\n",ans);
    }
    return 0;
}
