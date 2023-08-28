#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int n,k;
int ans;

void dfs(int x,int y,int o)
{
    if(o==k)
    {
        if(y>=x&&y>0&&x>=0)ans++;
        return;
    }
    if(x<=0||y<=0)return;
    dfs(y-x,x,o+1);
    return;
}

void solve()
{
    cin>>n>>k;
    ans=0;
    if(n==1){
        if(k==3)cout<<1<<endl;
        else cout<<0<<endl;
        return;
    }
    for(int i=(n+1)/2;(n-i)<=i&&i<=n;i++){
        dfs(i,n,2);
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

