#include<bits/stdc++.h>
using namespace std;


void solve()
{
    int i,num,sum=0,max=0;
    cin>>num;
    for(i=2; i<=num; i++)
    {
        int count=1,sum=0;
        while(sum<=num)
        {
            sum += (i*count);
            count++;
        }
        sum -= i*(count-1);
        if(sum>= max)
            max = sum;
        else
            break; 
    }
    cout<<--i<<"\n";
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
}