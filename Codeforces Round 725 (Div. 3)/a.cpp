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
    int ma=0,mi=0;
     for(int i=1;i<=n;i++){
        int x;cin>>x;
        if(x==1)mi=i;
        if(x==n)ma=i;
     }
     if(mi>ma)
        swap(mi,ma);
     cout<<min({ma,n-mi+1,mi+n-ma+1})<<endl;
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

