#include<bits/stdc++.h>
using namespace std;

// int gcd(int,int);
void solution();
bool cheak(vector<int>,int);
int main()
{
    int limit;
    cin>>limit;
    while(limit--)
    {
        solution();
    }
    return 0;
}

void solution()
{
        int n,count=0,index;
        vector<int>gcd_arr;
        cin>>n;
        vector<int>arr(n);
        for(int i=0; i<n; i++)
            cin>>arr[i];
        
        for(int i=0; i<n-1; i++)
        {
            gcd_arr.push_back(__gcd(arr[i],arr[i+1]));
        }
        for(int i=0; i<gcd_arr.size()-1; i++)
        {
            if(gcd_arr[i]>gcd_arr[i+1])
            {
                count++;
                index=i;
                break;
            }
        }

        if(count == 0)
        {
            cout<<"YES\n";
            return;
        }
        else
        {
            if(cheak(arr,index) || cheak(arr,index+1) || cheak(arr,index+2))
            {
                cout<<"YES\n";
                return;
            }
            else
                cout<<"NO\n";
                return;
        }
}

bool cheak(vector<int>arr,int index)
{
    if(index > arr.size())
        return false;

    vector<int>temp(arr);
    temp.erase(temp.begin()+index);
    vector<int>gcd_arr;

    for(int i=0; i<temp.size()-1; i++)
    {
        gcd_arr.push_back(__gcd(temp[i],temp[i+1]));
    }
    if(is_sorted(gcd_arr.begin(),gcd_arr.end()))
        return true;
    else
        return false;
}

