#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1000100;
int T,n,m,k,a[N];
bool check(int n,int m) {
    int sum = 0, mx = 0;
    for(int i = 1;i <= k;++i) {
        int x = a[i] / n;
        if(x >= 2) sum += x, mx = max(mx, x);
    }
    if(mx == 2 && m % 2) return false;
    return sum >= m;
}

signed main() {
    scanf("%lld", &T);
    while(T--) {
    		scanf("%lld%lld%lld", &n, &m, &k);
        for(int i = 1;i <= k;++i) scanf("%lld", &a[i]);
        sort(a + 1, a + 1 + k);
        if(check(n, m) || check(m, n)) puts("Yes");
        else puts("No");
    }
    return 0;
}
