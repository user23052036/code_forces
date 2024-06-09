#include<bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    while(limit--)
    {
        int n, m;
        cin >> n;
        int origin[n];
        vector<int> final(n);
        map<int, int> mp;

        for(int i = 0; i < n; i++)
            cin >> origin[i];
        for(int i = 0; i < n; i++)
            cin >> final[i];
        cin >> m;

        int key;
        for(int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
            if(i == m - 1)
                key = x;
        }

        bool flag = false;
        for(int it : final)
        {
            if(it == key)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            bool valid = true;
            for(int i = 0; i < n; i++)
            {
                if(origin[i] != final[i])
                {
                    if(mp[final[i]] > 0)
                        mp[final[i]]--;
                    else
                    {
                        valid = false;
                        break;
                    }
                }
            }
            if(valid)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else
            cout << "NO\n";
        mp.clear();
    }
    return 0;
}