#include <bits/stdc++.h>
#define int int64_t
#define tomax(x, y) x = max(x, (y))
#define tomin(x, y) x = min(x, (y))
using namespace std;
const int MAX = 105;
/*
------------------------------------------------
情况一：全为负数或正数，前后缀和既是答案，操作数19；
------------------------------------------------
情况二：我们可以发现，一个数-1|1，经过5次操作会变成-32|32；
而31-19=12；（19为进行前后缀操作）我们要在12次操作内把所有数变为负数或者正数
12-5=7；
1、如果正数>=13，负数<=7  7次 5次
2、如果正数<=12 最大的负数比正数大 12次

------------------------------------------------
*/
const int INF = 0x3f3f3f3f3f3f3f3fll;
const int MOD = 1000000007;
int call_count = 0;

int a[MAX];

void solve() {
    int n;
    cin >> n;
    int max_pos = 0, imax_pos = 0, cnt_pos = 0;
    int max_neg = 0, imax_neg = 0, cnt_neg = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 0) {
            if (max_pos < a[i]) {
                max_pos = a[i];  // 最大正数
                imax_pos = i;    // 最大正数的索引
            }
            cnt_pos++;  // 正数个数
        } else if (a[i] < 0) {
            if (max_neg < -a[i]) {
                max_neg = -a[i]; // (绝对值)最大负数
                imax_neg = i;    // (绝对值)最大负数的索引
            }
            tomax(max_neg, -a[i]);
            cnt_neg++;  // 负数个数
        }
    }
    if (cnt_pos == 0 and cnt_neg == 0) {  // 全 0
        cout << 0 << endl;
    } else if (cnt_pos == 0) {  // 只有非正数, 一遍后缀和
        cout << n - 1 << endl;
        for (int i = n - 2; i >= 0; i--) {
            cout << i + 1 << ' ' << i + 2<< endl;
        }
    } else if (cnt_neg == 0) {  // 只有非负数, 一遍前缀和
        cout << n - 1 << endl;
        for (int i = 1; i < n; i++) {
            cout << i + 1 << ' ' << i << endl;
        }
    } else {
        int tmp;
        vector<pair<int, int>> out_pos;
        tmp = max_pos;
        while (tmp < max_neg) {
            tmp *= 2;
            out_pos.push_back({imax_pos, imax_pos});  // 倍增
        }
        for (int i = 0; i < n; i++) {
            if (a[i] < 0) {
                out_pos.push_back({i, imax_pos});  // 变负为非负
            }
        }
        for (int i = 1; i < n; i++) {
            out_pos.push_back({i, i - 1});  // 前缀和
        }

        // 略
        vector<pair<int, int>> out_neg;
        tmp = max_neg;
        while (tmp < max_pos) {
            tmp *= 2;
            out_neg.push_back({imax_neg, imax_neg});
        }
        for (int i = 0; i < n; i++) {
            if (a[i] > 0) {
                out_neg.push_back({i, imax_neg});
            }
        }
        for (int i = n - 2; i >= 0; i--) {
            out_neg.push_back({i, i + 1});
        }

        // 决策
        if (out_pos.size() <= out_neg.size()) {
            cout << out_pos.size() << endl;
            for (pair<int, int> p : out_pos) {
                cout << p.first + 1 << ' ' << p.second + 1 << endl;
            }
        } else {
            cout << out_neg.size() << endl;
            for (pair<int, int> p : out_neg) {
                cout << p.first + 1 << ' ' << p.second + 1 << endl;
            }
        }
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

