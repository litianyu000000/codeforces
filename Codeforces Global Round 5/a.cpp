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
    int n;
    cin>>n;
    int cnt=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x%2)
        {
            if(cnt%2==0)
                x++;
            else
                x--;
            cnt++;
        }
        a[i]=x;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]/2<<endl;
    }
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

