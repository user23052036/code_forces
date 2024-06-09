#include<bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin>>limit;
    while(limit--)
    {
        int n,m;
        bool flag=false;
        cin>>n;
        int origin[n];
        vector<int>final;
        unordered_map<int,int>mp; // arrengement of value kuch bhi ho sakta he
                                  // not even according o the user input
        for(int i=0; i<n; i++)
            cin>>origin[i];
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            final.push_back(x);
        }
        cin>>m;
        int key;
        for(int i=0; i<m; i++)
        {
            int x;
            cin>>x;
            mp[x]++;
            if(i==m-1)
                key=x;
        }

        for(int i=0; i<n; i++)
        {
            if(final[i]==key)
                flag==true;
        }

        if(flag==true)
        {
            int i;
            for(i=0; i<n; i++)
            {
                if(origin[i] != final[i])
                {
                    if(mp[final[i]] > 0)
                        mp[final[i]]--;
                    else
                    {
                        cout<<"NO\n";
                        break;
                    }
                }
            }
            if(i==n)
                cout<<"YES\n";
        }
        else if(flag==false)
            cout<<"NO\n";
        mp.clear();
    }
    return 0;
}