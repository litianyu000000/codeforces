#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int n,m;
int a[1000010];

void solve()
{
    cin >> n >> m;
    int sum = 0;
    int aa = 0, bb = 0;
    for(int i = 1 ; i <= n ; i ++ ) {
        cin >> a[i] , sum += a[i];
        if(a[i] & 1) bb ++ ;
    }
    aa = n - bb;
    
    while(m -- ) {
        int op, v;
        cin >> op >> v;
        if(op == 0) {
            sum += aa * v;
            if(v & 1) bb += aa, aa = 0;
        }
        else {
            sum += bb * v;
            if(v & 1) aa += bb, bb = 0;
        }
        cout << sum << endl;
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
  