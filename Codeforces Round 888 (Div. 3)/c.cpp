#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int a[200010],b[200010];

void solve()
{
    int n;cin>>n;
    int k;cin>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>x,y;
    for(int i=0;i<n;i++){
        if(a[i]==a[0])
            x.push_back(i);
        if(a[i]==a[n-1])
            y.push_back(i);
    }
    if(x.size()<k||y.size()<k){
        cout<<"NO"<<endl;return;
    }
    if(a[0]==a[n-1]){
        cout<<"YES"<<endl;return;
    }
    int idx,idy;
    idx=x[k-1];
    idy=y[y.size()-k];
    if(idx>idy){
        cout<<"NO"<<endl;return;
    }
    cout<<"YES"<<endl;
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

