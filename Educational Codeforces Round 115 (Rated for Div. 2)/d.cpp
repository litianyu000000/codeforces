#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
    int a,c;
    string b,d;
    int cnt1=0,cnt2=0;
    while(cin>>a>>b>>d>>c){
        if(d=="F")cnt1++;
        else cnt2++;
    }
    cout<<"Enum="<<cnt1<<','<<"Mnum="<<cnt2<<endl;
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
  