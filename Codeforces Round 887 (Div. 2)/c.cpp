#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int a[200010];

//如果x位于a[i] a[i+1]之间，它将移动到x-i的新位置，因为在它之前的i个位置已经被删除
void solve()
{
    int n,k;cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=0,ans=1;
    while(k--){
        while(j<n&&a[j]<=ans+j)j++;
        ans+=j;
    }
    cout<<ans<<endl;
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


/*
二分答案
void solve() {
    scanf("%d%d",&n,&k);
    rep(i,0,n) scanf("%lld",&a[i]);
    ll l=0,r=(ll)n*k+1;
    while (l+1<r) {
        ll md=(l+r)>>1;
        ll cnt=md;k轮后最小的数
        rep(i,0,k) {
            int x=upper_bound(a,a+n,cnt)-a;比如mid位于a[i] a[i+1]之间，那么就是减去i，删去前i个数，这个数就变成了第mid-i小的数。
            cnt-=x;
        }
        if (cnt>0) r=md; else l=md;
    }
    printf("%lld\n",r);
}
*/


/*
jls线性答案
#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
        a[i]--;
    }

    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        if (ans >= a[i]) {
            if (ans >= a[i] + 1LL * i * (k - 1)) {
                ans += k;
            } else {
                ans += (ans - a[i]) / i + 1;
            }
        }
    }
    std::cout << ans + 1 << "\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int t;
    std::cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

*/
