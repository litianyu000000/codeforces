#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
    int n,s;cin>>n>>s;
    vector<int>a(1010);
    map<int,int>mp;
    int mx=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]=1;
        mx=max(mx,a[i]);
    }
    int sum=0;
    for(int i=1;i<=mx;i++){
        if(!mp[i])sum+=i;
    }
    if(sum>s){
        cout<<"NO"<<endl;
    }else if(sum==s){
        cout<<"YES"<<endl;
    }else{
        for(int i=mx+1;sum<s;i++){
            sum+=i;
            if(sum==s){
                cout<<"YES"<<endl;return;
            }
            if(sum>s){
                cout<<"NO"<<endl;return;
            }
        }
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
  