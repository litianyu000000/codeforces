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
    int l,r;cin>>l>>r;
    string s1=to_string(l),s2=to_string(r);
    s1=string(s2.size()-s1.size(),'0')+s1;
    int ans=0,v=r-l;//最后一位肯定是变了r-l次，那么进位r-l+s[n-1]/10次。
    for(int i=s1.size()-1;i>=0;i--){
        ans+=v;
        v=(v+s1[i]-'0')/10;
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

