#include<bits/stdc++.h>
using namespace std;


int binary_search_min(int*,int, int,int);
int binary_search_max(int*,int, int,int);
void merge_sort(int*,int,int);
void merge(int*,int,int,int);
int main()
{
    int n,k;
    cin>>n;
    int arr[n];
    for(auto &iterate:arr)
        cin>>iterate;
    cin>>k;
    merge_sort(arr,0,n-1);

    while(k--)
    {
        int l,l_indx,r,r_indx;
        cin>>l>>r;
        l_indx = binary_search_min(arr,l,0,n-1);
        r_indx = binary_search_max(arr,r,0,n-1);
        cout<<r_indx-l_indx<<'\n';
    }
    return 0;
}

void merge_sort(int *arr, int low, int high)
{
    if(low>=high) return;
    int mid = (low+high)/2;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}
void merge(int *arr, int low, int mid, int high)
{
    int *temp = (int*)malloc((high-low+1)*sizeof(int));
    int *ptr1=&arr[low], *ptr2=&arr[mid+1];
    int count=0;

    while(ptr1<=&arr[mid] && ptr2<=&arr[high])
    {
        if(*ptr1>=*ptr2)
        {
            temp[count++]=*ptr2;
            ptr2++;
        }
        else
        {
            temp[count++]=*ptr1;
            ptr1++;
        }
    }
    while(ptr1<=&arr[mid])
    {
        temp[count++]=*ptr1;
        ptr1++;
    }
    while(ptr2<=&arr[high])
    {
        temp[count++]=*ptr2;
        ptr2++;
    }

    for(int i=low; i<=high; i++)
        arr[i]=temp[i-low];
    free(temp);
}

int binary_search_max(int *arr, int num, int low, int high) 
{
    int mid = (low + high) / 2;
    if (low > high)
        return low;
    
    if (num>=arr[mid])
        return binary_search_max(arr, num, mid + 1, high);
    else
        return binary_search_max(arr, num, low, mid - 1);
}

int binary_search_min(int *arr, int num, int low, int high) 
{
    int mid = (low+high)/2;
    if(low>high)
        return low;

    if(num<=arr[mid])
        return binary_search_min(arr,num,low,mid-1);
    else
        return binary_search_min(arr,num,mid+1,high);
}