#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
const int N = 3010;
void solve()
{
    int m, k, a, b;
    cin >> m >> k >> a >> b;
    int mk = m % k;
    int m_k = m / k;
    if (a >= mk)
    {
        a -= mk;
        b += a / k;
        cout << max(0, m_k - b) << endl;
    }
    else
    {
        cout << max(0, m_k - b) + mk - a << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin >> t;
    while (t--)
        solve();
}