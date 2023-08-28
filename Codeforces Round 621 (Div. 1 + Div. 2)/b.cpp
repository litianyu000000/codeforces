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
    int n,x;
    int mx=0,f=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        int k;cin>>k;
        if(k==x){f=1;}
        mx=max(mx,k);
    }
    if(f==1){
        cout<<1<<endl;return;
    }
    if(mx>x){
        cout<<2<<endl;return;
    }
    if(x%mx==0)cout<<x/mx<<endl;
    else cout<<x/mx+1<<endl;
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

