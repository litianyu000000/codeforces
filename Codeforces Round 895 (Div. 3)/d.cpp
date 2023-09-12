#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    //x标记个数,y标记个数,x/y都标记的个数
    int a=n/x;
    int b=n/y;
    int c=n/(lcm(x,y));
    a-=c,b-=c;
    int ans=0;
    ans+=(n+n-a+1)*a/2;
    ans-=(1+b)*b/2;
    cout<<ans<<'\n';
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
  