#include<bits/stdc++.h>
using namespace std;

void solve() 
{
    int n, q, sum = 0;
    cin >> n >> q;
    vector<int> vec(n);
    vector<int> prefix_sum(n + 1, 0);

    for(int i = 0; i < n; i++) 
    {
        cin >> vec[i];
        sum += vec[i];
        prefix_sum[i + 1] = prefix_sum[i] + vec[i];
    }

    while(q--) 
    {
        int l, r, k;
        cin >> l >> r >> k;

        int current_sum = prefix_sum[r] - prefix_sum[l - 1];
        int temp_sum = sum - current_sum + (r - l + 1) * k;

        if(temp_sum % 2 != 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt;
    cin >> tt;
    while(tt--) {solve();}
    return 0;
}
