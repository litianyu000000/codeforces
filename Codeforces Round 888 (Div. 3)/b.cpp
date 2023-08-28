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
    for(int i=0;i<n;i++){
        cin>>a[i],b[i]=a[i];
    }
    sort(b,b+n);
    for(int i=0;i<n;i++){
        if(abs(a[i]-b[i])%2){
            cout<<"NO"<<endl;return;
        }
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

