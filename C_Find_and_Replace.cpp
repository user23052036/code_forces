#include<bits/stdc++.h>
using namespace std;


void solve()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  vector<int> X(26, 0);

  for (int i = 0; i < N; i++) 
  { 
    int a = S[i] - 'a';
    if (i % 2 == 0) X[a] |= 1;    //even i
    if (i % 2 == 1) X[a] |= 2;    //odd i
  }

  bool result = (*max_element(X.begin(), X.end()) <= 2);
  cout << (result ? "YES" : "NO") << endl;
}

int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int tt; cin >> tt; 
  while(tt--){solve();}
}