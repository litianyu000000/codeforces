#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int n,m;

bool check(int mid,vector<int>a)
{
    int r=m;
    for(int i=1;i<=n;i++)
    {
        if(a[i]<mid)r-=a[i]+(mid-a[i])/2;
        else r-=mid;
    }
    return r<=0;
}


void solve() {
    cin>>n>>m;
    vector<int>a(n+1,0);
    for(int i=1;i<=m;i++){
        int x;cin>>x;
        a[x]++;
    }
    int l=-1,r=m*2+1;
    while(l+1!=r)
    {
        int mid=l+r>>1;
        if(check(mid,a))
            r=mid;
        else
            l=mid;
    }
    cout<<r<<endl;
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