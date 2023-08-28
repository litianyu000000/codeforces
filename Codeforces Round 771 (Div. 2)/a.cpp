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
    int t=1;
    for(int i=1;i<=n;i++)cin>>a[i];
    while(t<=n&&a[t]==t)t++;
    reverse(a.begin()+t,find(a.begin()+1,a.end(),t)+1);
    for(int i=1;i<=n;i++)cout<<a[i]<<' ';
    cout<<endl;
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

