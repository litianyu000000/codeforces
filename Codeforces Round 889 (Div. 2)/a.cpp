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
    vector<int>a(n);
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i+1==a[i])ans++;
    }
    if(ans)
        cout<<(ans+1)/2<<endl;
    else cout<<0<<endl;
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

