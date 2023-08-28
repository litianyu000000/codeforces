#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
vector<int>a[50010];

void solve()
{
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int m;cin>>m;
        a[i].clear();
        for(int j=0;j<m;j++){
            int x;cin>>x;a[i].push_back(x);
        }
        sort(a[i].begin(),a[i].end());
    }
    vector<int>b(n),c(n);
    for(int i=0;i<n;i++){
        b[i]=a[i][0];c[i]=a[i][1];
    }
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    int ans=0;
    ans+=b[0];
    for(int i=1;i<n;i++){
        ans+=c[i];
    }
    cout<<ans<<endl;
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

