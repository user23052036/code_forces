#include<stdio.h>

int main()
{
    int limit,winner;
    scanf("%d",&limit);
    while(limit!=0)
    {
        int n,a,b,b_max=0;
        scanf("%d",&n);
        for(int i=1; i<=n; i++)
        {
            scanf("%d%d",&a,&b);
            if(a<=10 && b>b_max)
            {
                b_max=b;
                winner=i;
            }
        }
        printf("%d\n",winner);
        limit--;
    }
    return 0;
}