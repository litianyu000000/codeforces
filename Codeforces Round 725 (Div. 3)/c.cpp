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
    int n,l,r;cin>>n>>l>>r;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<n;i++){
        auto it1=lower_bound(a.begin()+i+1,a.end(),l-a[i]);//大于等于
        auto it2=upper_bound(a.begin()+i+1,a.end(),r-a[i]);//大于
        ans+=it2-it1;
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

