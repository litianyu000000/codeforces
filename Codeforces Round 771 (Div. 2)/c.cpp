#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
//单调栈

void solve()
{
     int n;cin>>n;
     stack<int>q;
     for(int i=1,x;i<=n;i++){
        cin>>x;
        if(q.size()==0){
            q.push(x);continue;
        }
        if(x>q.top())q.push(x);
        else{
            int t=q.top();
            while(q.size()&&x<q.top())q.pop();
            q.push(t);
        }
     }
     cout<<q.size()<<endl;
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

