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
    int n,m,k,h;cin>>n>>m>>k>>h;
    vector<int>a(n);
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        int t=abs(h-a[i]);
        if(t&&t%k==0&&t/k<m)ans++;
    }
    cout<<ans<<"\n";
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

