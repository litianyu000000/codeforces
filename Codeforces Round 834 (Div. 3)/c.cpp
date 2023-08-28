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
    int l,r,x,a,b;
    cin>>l>>r>>x>>a>>b;
    if(a==b)
    {
        cout<<0<<endl;
        return ;
    }
    if(a>b)
    {
        swap(b,a);
    }
    if(abs(a-b)>=x)
    {
        cout<<1<<endl;
        return ;
    }
    if(r<=a) 
    {
        cout<<-1<<endl;
        return ;
    }
    if(abs(a-l)<x&&abs(a-r)<x)
    {
        cout<<-1<<endl;
        return ;
    }
    if(abs(a-l)>=x)
    {
        if(abs(l-b)>=x)
        {
          cout<<2<<endl;
          return ;  
        }
        if(abs(l-r)>=x)
        {
            if(abs(r-b)>=x)
            {
                cout<<3<<endl;
                return ;
            }
        }
    }
     if(abs(a-r)>=x)
    {
        if(abs(r-b)>=x)
        {
            cout<<2<<endl;
            return ;
        }
        if(abs(r-l)>=x)
        {
            if(abs(l-b)>=x)
            {
                cout<<3<<endl;
                return ;
            }
        }
        
    }
    cout<<-1<<endl;
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
  