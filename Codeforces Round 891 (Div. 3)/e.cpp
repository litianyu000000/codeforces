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
    int n;cin >> n;
    vector<array<int,2>> a(n);
    for(int i = 0;i < n;i ++ )
        cin >> a[i][0],a[i][1] = i + 1;
    sort(a.begin(),a.end(),[&](array<int,2>& i,array<int,2>& j){
        return i[0] < j[0];
    });
    int ans = 1;vector<int> res(n + 1);
    for(int i = 1;i < n;i ++ )
        ans += (a[i][0] - a[0][0] + 1);
    res[a[0][1]] = ans;
    for(int i = 1;i < n;i ++ ){
        ans += (i - 1LL) * (a[i][0] - a[i - 1][0]);
        ans -= (n - i - 1LL) * (a[i][0] - a[i - 1][0]);
        res[a[i][1]] = ans;
    }
    for(int i = 1;i <= n;i ++ ){
        cout << res[i] << " \n"[i == n];
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

