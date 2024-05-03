#include<stdio.h>
#include<stdlib.h>

int sort(int*,int);
int main()
{
    int n,limit,index;
    scanf("%d",&n);

    int *arr = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
    
    sort(arr,n);
    if(n%2==0)
    {
        index = (n/2)+1;
        printf("%d",arr[index]);
    }
    else
    {
        index = (n-1)/2;
        printf("%d",arr[index]);
    }
    free(arr);
    return 0;
}

int sort(int *arr, int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }
}