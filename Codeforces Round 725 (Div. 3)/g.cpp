#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
//2 2
//01

void solve()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int>a;
    for(int i=0;i<n;i++)
        if(s[i]=='1')
            a.push_back(i+1);
    int ans=a.size()*11;
    if(!ans){
        cout<<0<<endl;return;
    }
    if(k>=a[0]-1+n-a[a.size()-1]&&ans>=22)
        ans-=11;
    else if(k>=n-a[a.size()-1])
        ans-=10;
    else if(k>=a[0]-1)
        ans-=1;
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

