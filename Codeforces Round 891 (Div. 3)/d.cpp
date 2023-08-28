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
    vector<int>a(n),b(n),k,ans;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
        k.push_back(a[i]-b[i]);
    }
    int ma=*max_element(k.begin(),k.end());
    for(int i=0;i<n;i++){
        if(ma==k[i]){
            ans.push_back(i+1);
        }
    }
    cout<<ans.size()<<endl;
    for(auto t:ans){
        cout<<t<<' ';
    }cout<<endl;
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

