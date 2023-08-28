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
    map<int,int>mp[4];
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        int x,y;cin>>x>>y;
        ans+=mp[0][x]++;//共同在一行
        ans+=mp[1][y]++;//共同在一列
        ans+=mp[2][x+y]++;//共同在一斜线
        ans+=mp[3][x-y]++;//另一个斜线
    }
    cout<<ans*2<<endl;
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

