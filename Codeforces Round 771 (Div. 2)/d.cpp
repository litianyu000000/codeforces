#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
#ifdef LOCAL
    freopen("input", "r", stdin);
#endif
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        // a[i].resize(m);
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }

    auto equal = [&](int x, int y) {
        int col = 0;
        if (x < 0 || x + 1 >= n || y < 0 || y + 1 >= m)
            return make_pair(false, col);
        set<int> s;
        for (auto it : {a[x][y], a[x + 1][y], a[x][y + 1], a[x + 1][y + 1]})
            if (it != 0) s.insert(it), col = it;
        return make_pair(s.size() == 1, col);
    };

    auto paint = [&](int x, int y) {
        a[x][y] = a[x + 1][y] = a[x][y + 1] = a[x + 1][y + 1] = 0;
    };

    queue<tuple<int, int, int>> q;
    vector<tuple<int, int, int>> v;

    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < m - 1; j++) {
            auto [res, col] = equal(i, j);
            if (res) {
                q.push({i, j, col});
                paint(i, j);
            }
        }

    while (!q.empty()) {
        auto [x, y, _] = q.front();
        v.push_back(q.front());
        q.pop();
        for (int i = x - 1; i <= x + 1; i++)
            for (int j = y - 1; j <= y + 1; j++) {
                auto [res, col] = equal(i, j);
                if (res) {
                    q.push({i, j, col});
                    paint(i, j);
                }
            }
    }

    bool ok = true;
    for (int i = 0; i < n && ok; i++)
        for (int j = 0; j < m && ok; j++)
            if (a[i][j] != 0) ok = false;

    if (!ok)
        cout << "-1" << endl;
    else {
        reverse(v.begin(), v.end());
        cout << v.size() << '\n';

        for (auto [x, y, col] : v)
            cout << x + 1 << " " << y + 1 << " " << col << '\n';
    }
}