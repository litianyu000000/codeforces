#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

//奇数偶数分家

void solve()
{
    int n;cin>>n;
    vector<int>a(n),b(n),c(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2)
            b.push_back(a[i]);
        else
            c.push_back(a[i]);
    }
    bool f=false;
    for(int i=0;i<b.size()-1;i++){
        if(b[i]>b[i+1]){
            f=true;break;
        }
    }
    if(f){
        cout<<"NO"<<endl;return;
    }
    for(int i=0;i<c.size()-1;i++){
        if(c[i]>c[i+1]){
            f=true;break;
        }
    }
    if(f){
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

