#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int find_largest_prime(int);
int main()
{
    int limit,prime;
    scanf("%d",&limit);
    for(int i=0; i<limit; i++)
    {
        int n,max=0;
        scanf("%d",&n);
        int *arr = (int*)malloc((n-1)*sizeof(int));
        
        for(int j=0; j<n-1; j++)
            scanf("%d",&arr[j]);
        
        for(int k=0; k<n-1; k++)
        {
            if(arr[k]>max)
                max = arr[k];
        }
        prime = find_largest_prime(max);
        for(int l=0; l<n; l++)
        {
            printf("%d\t",prime);
            prime = prime + arr[l];
        }
        printf("\n");
        free(arr);
    }
    return 0;
}

int find_largest_prime(int num)
{
    int count,j;
        
    for(int i=num+1; i<=100000; i++)
    {
        count=0;
        for(j=1; j<=i; j++)
            if(i%j == 0)
                count++;
        if(count==2)
            return(i);
    }
}
