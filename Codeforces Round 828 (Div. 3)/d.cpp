#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve()
{
	int n;
    cin >> n;
    vector<int>a(n+1);
    int res = 0;
    vector<int> v;
    for(int i = 1; i <= n ; i ++ ) {
        cin >> a[i];
        int t = a[i];
        while(t % 2 == 0) t /= 2, res ++ ;
        t = i;
        int s = 0;
        while(t % 2 == 0) t /= 2, s ++ ;
        if(s) v.push_back(s);
    }
    
    if(res >= n) cout << 0 << endl;
    else {
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int l = 0;
        int V = n - res;
        // cout << V << endl;
        int ans = 0;
        while(l < v.size() && V) {
            if(v[l] <= V) ans ++ , V -= v[l];
            l ++  ;
        }
        if(V) cout << -1 << endl;
        else cout << ans << endl;
    }
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
  