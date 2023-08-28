#include <bits/stdc++.h>

using i64 = long long;

i64 sqrt(i64 n) {
    i64 lo = 0, hi = 2 * std::sqrt(n);
    while (lo < hi) {
        i64 x = (lo + hi) / 2;
        if (x * x >= n) {
            hi = x;
        } else {
            lo = x + 1;
        }
    }
    return lo;
}

void solve() {
    int n;
    std::cin >> n;

    std::map<i64, int> cnt;
    for (int i = 0; i < n; i++) {
        int a;
        std::cin >> a;
        cnt[a]++;
    }

    int q;
    std::cin >> q;

    for (int i = 0; i < q; i++) {
        i64 x, y;
        std::cin >> x >> y;

        if (x * x - 4 * y < 0) {
            std::cout << 0 << " ";
            continue;
        }

        i64 s = sqrt(x * x - 4 * y);
        i64 a = (x + s) / 2;
        i64 b = (x - s) / 2;
        if (a + b != x || a * b != y) {
            std::cout << 0 << " ";
            continue;
        }
        if (a == b) {
            int c = cnt[a];
            std::cout << 1LL * c * (c - 1) / 2 << " ";
        } else {
            std::cout << 1LL * cnt[a] * cnt[b] << " ";
        }
    }
    std::cout << "\n";
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