#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
vector<int>a[3];

void solve() {
  int n;
  cin >> n;
  cout << "2\n";
  vector<int> a(n + 1);
  for (int i = 1;i <= n;i++) {
    if (a[i]) continue;
    for (int j = i;j <= n;j*=2) {
      a[j] = 1;
      cout << j << " ";
    }
  }
  cout << "\n";
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}