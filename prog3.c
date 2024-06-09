#include<stdio.h>

int main()
{
    int limit;
    scanf("%d",&limit);
    while(limit!=0)
    {
        int a,b,c,d,p1,p2;
        scanf("%d%d%d%d",&a,&b,&c,&d);

        if(a<b) 
        {
            p1=a;
            p2=b;
        }
        else 
        {
            p1=b;
            p2=a;
        }

        if(c>p1 && c<p2)
        {
            if(d>p1 && d<p2)
                printf("NO\n");
            else
                printf("YES\n");
        }
        else
        {
            if(d>p1 && d<p2)
                printf("YES\n");
            else
                printf("NO\n");
        }
        limit--;
    }
    return 0;
}