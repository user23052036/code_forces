#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,count=0;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    int i=0,j=0,maxi;
    long long int min_sum;
    while(j<arr.size())
    {
        min_sum=0;
        maxi = *max_element(arr.begin(),arr.begin()+j+1);  

        for(int it=i; it<=j; it++)
            min_sum += arr[it];
        min_sum -= maxi;

        if(min_sum == maxi)
            count++;
        j++;
    }
    cout<<count<<"\n";
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
}