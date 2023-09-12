#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
map<int,int>mp;
int ans=0,n;

void dfs(int a,int b,int c,int s){
    if(s>n)return;
    s=s*10+a;
    if(s<=n)ans++,cout<<s<<endl;
    dfs(a,b,c,s);
    s/=10;
    s=s*10+b;
    if(s<=n)ans++,cout<<s<<endl;
    dfs(a,b,c,s);
    s/=10;
    s=s*10+c;
    if(s<=n)ans++,cout<<s<<endl;
    dfs(a,b,c,s);

}

void solve(){
    cin>>n;
    dfs(2,3,7,0);
    cout<<ans<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
  