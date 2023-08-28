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
    int sum=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n){
        cout<<-1<<endl;
    }else{
        sum/=n;
        bool f=false;
        for(int i=0;i<n;i++){
            if(sum!=a[i])
                f=true;
        }
        if(!f){
            cout<<0<<endl;
        }else{
            int ans=0;
            for(int i=0;i<n;i++){
                if(sum<a[i]){
                    ans++;
                }
            }
            cout<<ans<<endl;
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

