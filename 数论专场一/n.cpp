#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
//用min max算最大最小根
void solve()
{
    double a,b,c;cin>>a>>b>>c;
    double k=sqrt(b*b-4*a*c);
    printf("%.15lf\n%.15lf",max((-b+k)/(2*a),(-b-k)/(2*a)),min((-b+k)/(2*a),(-b-k)/(2*a)));
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

