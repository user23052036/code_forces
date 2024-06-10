#include<bits/stdc++.h>
using namespace std;

int main()
{
    int limit;
    cin>>limit;
    while(limit--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n],sm_size=0,uni_count=1;
        unordered_map<int,vector<int>>ump;
        int ans[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            ump[arr[i]].push_back(i);
        }

        for(auto it: ump)
        {
            if(it.second.size() < k)
                sm_size = sm_size + it.second.size();
        }
        int iterator = k*(sm_size/k);

        for(auto it: ump)
        {
            if(it.second.size() >= k)
            {
                int count=1,flag=1;
                for(auto index: it.second)
                {
                    if(count > k)
                    {
                        count=0;
                        flag=0;
                    }
                    ans[index]=count;
                    if(flag==1)
                        count++;
                }
            }
            else
            {
                for(auto index: it.second)
                {
                    if(iterator)
                    {
                        if(uni_count > k)
                            uni_count=1;

                        ans[index] = uni_count;
                        uni_count++;
                        iterator--;
                    }
                    else
                        ans[index]=0;
                }
            }
        }
        for(auto it: ans)
            cout<<it<<" ";
        cout<<'\n';
        ump.clear();
    }
    return 0;
}
