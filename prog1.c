#include<stdio.h>

int main()
{
    int limit;
    scanf("%d",&limit);
    while(limit!=0)
    {
        int num1,num2;
        scanf("%d%d",&num1,&num2);
        if(num1<num2) printf("%d %d\n",num1,num2);
        else printf("%d %d\n",num2,num1);
        limit--;
    }
    return 0;
}