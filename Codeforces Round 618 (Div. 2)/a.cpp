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
    int n;cin>>n;
    vector<int>a(n+1);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c0=0,c1=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)c0++;
        c1+=a[i];
    }
    int ans=c0;
    if(ans+c1==0)ans++;
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

