#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

bool cmp(pii a,pii b)
{
    if(a.x==b.x)return a.y<b.y;
    return a.x>b.x;
}

void solve()
{
    int n,k;cin>>n>>k;
    vector<pii>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i].x,a[i].y=i;
        if(a[i].x%k)a[i].x%=k;
        else a[i].x=k;
    }
    sort(a.begin()+1,a.end(),cmp);
    for(int i=1;i<=n;i++){
        cout<<a[i].y<<' ';
    }cout<<endl;
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

