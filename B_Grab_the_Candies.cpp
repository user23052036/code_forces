#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,mihir=0,bianca=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x%2 == 0)
            mihir += x;
        else
            bianca += x;
    }
    if(mihir>bianca)cout<<"YES\n";
    else cout<<"NO\n";
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
}