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
    int n;
    cin>>n;
    int a[100010];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    bool f=false;
    for(int i=2;i<=n;i++){
        if(a[i]<a[i-1])
        {
            f=true;break;
        }
    }
    if(f){
        cout<<0<<endl;return;
    }
    else {
        int ma=0x3f3f3f3f;
        for(int i=2;i<=n;i++)
        {
            ma=min(a[i]-a[i-1],ma);
        }
        cout<<ma/2+1<<endl;
    }
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

