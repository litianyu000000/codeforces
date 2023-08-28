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
    int ans=0x3f3f3f3f;
    int n,d,e;cin>>n>>d>>e;
    e*=5;
    for(int i=0;i*d<=n;i++)
    {
        ans=min(ans,(n-i*d)%e);
    }
    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

