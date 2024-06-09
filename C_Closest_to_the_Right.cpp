#include<iostream>
using namespace std;


int binary_search_max(int*,int, int,int);
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(auto &iterate:arr)
        cin>>iterate;
    while(k--)
    {
        int q;
        cin>>q;
        cout<<binary_search_max(arr,q,0,n-1)<<'\n';
    }
    return 0;
}

int binary_search_max(int *arr, int num, int low, int high) 
{
    int mid = (low+high)/2;
    if(low>high)
        return ++low;

    if(num<=arr[mid])
        return binary_search_max(arr,num,low,mid-1);
    else
        return binary_search_max(arr,num,mid+1,high);
}

