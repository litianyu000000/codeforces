#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<int> c(n + 1);
        for(int i = 1; i <= n; i++) cin >> c[i];
        for(int i = 1; i <= k; i++){
            int x;
            cin >> x;
            c[x] = 0;
        }
        vector<vector<int> > g(n + 1);
        for(int i = 1; i <= n; i++){
            int c;
            cin >> c;
            g[i].resize(c);
            for(int j = 0; j < c; j++) cin >> g[i][j];
        }
        vector<LL> f(n + 1, -1);

        auto dp = [&](auto &&dp, int x) -> LL {
            if (f[x] != -1) return f[x];
            if (g[x].empty()) return 1LL * c[x];
            LL ans = 0;
            for(auto j : g[x]) ans += dp(dp, j);
            return f[x] = min(1LL * c[x], ans);
        };

        for(int i = 1; i <= n; i++){
            cout << dp(dp, i) << " \n"[i == n];
        }
    }

}