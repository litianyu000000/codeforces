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
     int cnt=0;
     for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2)cnt++;
     }
     if(cnt%2)
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
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

