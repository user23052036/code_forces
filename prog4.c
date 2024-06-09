#include<stdio.h>
#include<math.h>

int main()
{
    int limit;
    scanf("%d",&limit);
    while(limit!=0)
    {
        int r,distance,i,nos;
        scanf("%d",&r);
        for(i=1; i<=r; i++)
        {
            distance = sqrt((r*r)+(i*i));
            if(distance>=r && distance<r+1)
                continue;
            else
                break;
        }
        nos = 8*r;
        if(i>r)
        {
            printf("%d\n",nos);
        }
        else
        {
            printf("%d\n",nos-4*(r+1-i));  
        }
        limit--;
    }
    return 0;
}