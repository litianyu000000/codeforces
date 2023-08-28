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
    vector<int>a;
    string s,t;cin>>s>>t;
    for(int i=0;i<n;i++){
        if(s[i]!=t[i])
        {
            a.push_back(i);
        }
    }
    if(a.size()>2||a.size()==1){
        cout<<"NO"<<endl;
    }
    else if(a.size()==0){
        cout<<"YES"<<endl;
    }
    else
    {
        //cout<<a[0]<<' '<<a[1]<<' ';
        if(s[a[0]]==s[a[1]]&&t[a[1]]==t[a[0]]){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
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

