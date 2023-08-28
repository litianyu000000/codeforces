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
    string s;cin>>s;
    if(s=="()")
    cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        bool f=true;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1])
                f=false;
        }
        if(!f){
            for(int i=0;i<s.size();i++){
                cout<<"()";
            }
            cout<<endl;
        }else{
            for(int i=0;i<s.size();i++){
                cout<<"(";
            }
            for(int i=0;i<s.size();i++){
                cout<<")";
            }cout<<endl;
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

