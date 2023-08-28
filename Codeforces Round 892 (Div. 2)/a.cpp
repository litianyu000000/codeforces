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
     vector<int>a(n),b,c;
     for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    if(a[0]==a[n-1]){
        cout<<-1<<endl;return;
    }
    int cnt=count(a.begin(),a.end(),a[0]);
    cout<<cnt<<' '<<n-cnt<<endl;
    for(int i=0;i<cnt;i++)cout<<a[i]<<' ';
    cout<<endl;
    for(int i=cnt;i<n;i++)cout<<a[i]<<' ';
    cout<<endl;
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

