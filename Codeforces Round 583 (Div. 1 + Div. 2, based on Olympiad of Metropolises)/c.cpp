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
     string s;cin>>s;
     int ans=0,f=0;
     for(int i=0;i<n;i++){
        if(s[i]==')')
            ans--;
        else
            ans++;
        if(ans<-1){
            f=1;
            break;
        }
     }
     if(ans==0&&!f)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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

