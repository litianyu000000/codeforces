#include <bits/stdc++.h>
using namespace std;
using LL = long long;
//分为n=p^k  n=pq,两种情况，第一种就是p个颜色，第二种i,j相对于x的差的绝对值分别是p,q,那么i,j与x是同色，所以是一种颜色。
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    LL n;
    cin >> n;
    for (LL i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            if (n == 1) {
                cout << i << endl;
            } else {
                cout << 1 << endl;
            }
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}