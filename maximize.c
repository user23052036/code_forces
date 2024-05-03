#include<stdio.h>
#include<math.h>

int gcd(int,int);
int main()
{
    int x,y,max=0,maybe_max,max_y,limit;
    scanf("%d",&limit);
    
    for(int i=0; i<limit; i++)
    {
        scanf("%d",&x);
        max=0;
        for(y=1; y<x; y++)
        {
            maybe_max = gcd(x,y) + y;
            if(maybe_max > max)
            {
                max = maybe_max;
                max_y = y;
            }
        }
        printf("%d\n",max_y);
    }
    return 0;
}

int gcd(int num1, int num2)
{
    int i,small_gcd,min;
    
    if(num1<num2)
        min = num1;
    else
        min = num2;
        
    for(i=2; i<=min; i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            small_gcd = i*gcd(num1/i, num2/i);
            break;
        }
    }
    if(i==min+1)
        return(1);
    else
        return(small_gcd);
}