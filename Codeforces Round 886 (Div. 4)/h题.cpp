#include <bits/stdc++.h>

using i64 = long long;

void solve() {
    int n, m;
    std::cin >> n >> m;
    
    std::vector<i64> f(n);
    std::vector<bool> vis(n);
    
    std::vector<std::vector<std::pair<int, int>>> adj(n);
    for (int i = 0; i < m; i++) {
        int a, b, d;
        std::cin >> a >> b >> d;
        a--, b--;
        adj[a].emplace_back(b, -d);
        adj[b].emplace_back(a, d);
    }
    
    for (int i = 0; i < n; i++) {
        if (!vis[i]) {
            vis[i] = true;
            std::queue<int> q;
            q.push(i);
            
            while (!q.empty()) {
                int x = q.front();
                q.pop();
                
                for (auto [y, d] : adj[x]) {
                    if (!vis[y]) {
                        vis[y] = true;
                        q.push(y);
                        f[y] = f[x] + d;
                    } else if (f[y] != f[x] + d) {
                        std::cout << "NO\n";
                        return;
                    }
                }
            }
        }
    }
    std::cout << "YES\n";
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
