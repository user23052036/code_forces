#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int n,m,max=0;
    cin>>n>>m;
    vector<string>str;
    map<int,vector<int>>mp;

    for(int i=0; i<n; i++)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);
    }

    for(int j=0; j<str.size(); j++)
    {
        for(int i=0; i<str[j].size(); i++)
            if(str[j][i] == '#')
                mp[j+1].push_back(i+1);
    }

    for(auto it: mp)
    {
        if(it.second.size() > max)
            max = it.second.size();
        else
            break;
    }
    for(auto it: mp)
    {
        if(it.second.size() == max)
        {
            cout<<it.first<<' '<<(*(it.second.begin()) + *(it.second.rbegin()))/2<<"\n";
            mp.clear();
            return;
        }
    }
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
}