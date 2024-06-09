#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    while(limit--)
    {
        int n, m;
        cin >>n>>m;
        string a;
        cin >> a;
        int count = 0;
        map<char,int>maps;
        maps['A'] = 0;
        maps['B'] = 0;
        maps['C'] = 0;
        maps['D'] = 0;
        maps['E'] = 0;
        maps['F'] = 0;
        maps['G'] = 0;

        for (int i = 0; i < a.length(); i++)
            maps[a[i]]++;

        for (auto it : maps)
        {
            if (it.second >= m)
                continue;
            else
                count = count + m - it.second;
        }
        cout<<count<<'\n';
    }
    return 0;
}