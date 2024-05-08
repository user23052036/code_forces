#include<stdio.h>

int main()
{
    int limits;
    scanf("%d",&limits);

    while(limits!=0)
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);

        if(a<b && b<c) printf("STAIR\n");
        else if(a<b && b>c) printf("PEAK\n");
        else printf("NONE\n");
        limits--;
    }
    return 0;
}