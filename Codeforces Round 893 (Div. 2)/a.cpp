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
    int a,b,c;cin>>a>>b>>c;
    if(c%2==0){
        if(a>b){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
        }
    } else{
        if(a>b-1){
            cout<<"First"<<endl;
        }else{
            cout<<"Second"<<endl;
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

