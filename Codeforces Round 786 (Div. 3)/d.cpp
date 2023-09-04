#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

//n是奇数，a[1]一定是放在c[1]的位
//n是偶数，a[1]||a[2]一定放在了c[1]的位置;

void solve()
{
    int n; cin>>n;
    int a[n+1]; for(int i=1;i<=n;i++) cin>>a[i];
    multiset<int> s(a+1, a+1+n);
    int l = 1;
    
    for(int i=n;i>=1;i--,l++)
    {
        if(i%2)
        {
            if(a[l] != *s.begin())
            {
                cout<<"NO\n";
                return;
            }
            s.erase(s.begin());
        }
        else
        {
            if(a[l] != *s.begin() && (l == n || (l != n && a[l+1] != *s.begin()))) 
            { // 这两个数都不是全局最小值。
                cout<<"NO\n";
                return;
            }
            if(a[l] != *s.begin()) a[l+1] = a[l];
            s.erase(s.begin());
        }
    }
    cout<<"YES\n";
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
  