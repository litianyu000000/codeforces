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
    int ans=0,cnt=0;
    for(int i=1;i<=4e5;i++)
    {
        if(n%i==0){
            cnt++;
        }
        else
        {
            ans=max(ans,cnt);
            cnt=0;
            break;
        }
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

