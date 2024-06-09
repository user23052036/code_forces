#include <bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin >> limit;
    while(limit--)
    {
        int n,f,k;
        cin>>n>>f>>k;
        vector<int> v;
        int cnt = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            int element;
            cin >> element;
            v.push_back(element);
        }
        int fav = v[f - 1];
        sort(v.begin(),v.end(),greater<int>());
        for (int i = 0; i < n; i++)
        {
            if (i < k)
            {
                if (v[i] == fav)
                {
                    cnt++;
                    continue;
                }
            }
            if (v[i] == fav)
            {
                cnt2++;
            }
        }
        if (cnt > 0 && cnt2 == 0)
            cout << "YES" << endl;
        else if (cnt > 0 && cnt2 > 0)
            cout << "MAYBE" << endl;
        else
            cout << "NO" << endl;
        cnt = 0;
        cnt2 = 0;
    }

    return 0;
}