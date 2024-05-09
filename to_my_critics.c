#include<stdio.h>

int main()
{
    int limit;
    scanf("%d",&limit);
    while(limit!=0)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>=10 || b+c>=10 || c+a>=10)
            printf("YES\n");
        else    printf("NO\n");
        limit--;
    }
}