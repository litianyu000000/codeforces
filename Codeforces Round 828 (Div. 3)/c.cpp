#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

int n;
string s;


void solve()
{
    char c;
    cin >> n >> c;
    cin >> s;
    s = "?" + s + s;
    int mx = 0, last = 0;
    for(int i = 2 * n; i >= 1 ; i -- ) {
        if(s[i] == 'g') last = i;
        if(s[i] == c) mx = max(mx, last - i);
    }
    cout << mx << endl;
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
  