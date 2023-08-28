#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
pii a[100010];
int ans[100010];

void solve()
{
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].x,a[i].y=i;
    }
    sort(a,a+n);
    int l=0,r=n-1,t=n;
    while(l<=r)
    {
        if(a[l].x==n-1-r){
            ans[a[l].y]=-(t--);
            l++;
            continue;
        }
        if(a[r].x==n-l){
            ans[a[r].y]=t--;
            r--;
            continue;
        }
        cout<<"NO"<<endl;return;
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<' ';
    }
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

