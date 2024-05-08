#include<stdio.h>

int main()
{
    int limit,n,a,b;
    scanf("%d",&limit);
    while(limit!=0)
    {
        scanf("%d%d%d",&n,&a,&b);

        int i=0,minimum=3001;
        while(n-2*i>=0)
        {
            if(minimum > (n-2*i)*a + (i)*b)
                minimum = (n-2*i)*a + (i)*b;
            i++;
        }
        printf("%d\n",minimum);
        limit--;
    }
    return 0;
}