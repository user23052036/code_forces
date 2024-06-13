#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    int x,y,z;
    ll k,ans=0;
    cin>>x>>y>>z>>k;

    for(int l=1; l<=x; l++)
    {
        if(k%l != 0) continue;

        for(int b=1; b<=y; b++)
        {
            if((k/l)%b != 0) continue;

            ll h = (k/l)/b;
            if(h>z) continue;
            ans = max(ans,(ll)(x-l+1) * (y-b+1) * (z-h+1)); 
        }
    }
    cout<<ans<<"\n";
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int tt; cin >> tt; 
  while(tt--){solve();}
  return 0;
}