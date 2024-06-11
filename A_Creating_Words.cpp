#include<bits/stdc++.h>
using namespace std;


void solve()
{
    string str1,str2;
    cin>>str1>>str2;
    
    str1[0] = str1[0]+str2[0];
    str2[0] = str1[0]-str2[0];
    str1[0] = str1[0]-str2[0];
    cout<<str1<<" "<<str2<<'\n';
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
}