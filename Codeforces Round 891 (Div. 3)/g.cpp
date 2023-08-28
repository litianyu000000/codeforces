#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3f
#define flase false
#define ture true
#define ft first
#define sd second
#define int long long
#define startt cout<<"----------start----------\n";
#define endd cout<<"-----------end-----------\n";
#define No cout<<"No\n"
#define Yes cout<<"Yes\n"
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

const int N = 200010;
const int M = N * 2;
const int mod = 1e9 + 7;

template <typename T>
T read() {
    T sum = 0, fl = 1;
    int ch = getchar();
    for (; !isdigit(ch); ch = getchar())
        if (ch == '-') fl = -1;
    for (; isdigit(ch); ch = getchar()) sum = sum * 10 + ch - '0';
    return sum * fl;
}

template <typename T>
void print(T x) {
    if (x < 0) {
        x = -x;
        putchar('-');
    }
    if (x > 9) print(x / 10);
    putchar(x % 10 + '0');
}

struct DSU {
    vector<int> p, sz;
    DSU(int n) : p(n + 1), sz(n + 1, 1) {
        iota(p.begin(), p.end(), 0);
    }

    int find(int x) {
        return p[x] == x ? x : p[x] = find(p[x]);
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    bool merge(int x, int y) {
        x = find(x), y = find(y);
        if (x == y) return false;
        if (sz[x] < sz[y]) swap(x, y);
        sz[x] += sz[y];
        p[y] = x;
        return true;
    }

    int size(int x) {
        return sz[find(x)];
    }
};

template<const int T>
struct ModInt {
    const static int mod = T;
    int x;
    ModInt(int x = 0) : x(x % mod) {}
    int val() {
        return x;
    }
    ModInt operator + (const ModInt &a) const {
        int x0 = x + a.x;
        return ModInt(x0 < mod ? x0 : x0 - mod);
    }
    ModInt operator - (const ModInt &a) const {
        int x0 = x - a.x;
        return ModInt(x0 < 0 ? x0 + mod : x0);
    }
    ModInt operator * (const ModInt &a) const {
        return ModInt(1LL * x * a.x % mod);
    }
    ModInt operator / (const ModInt &a) const {
        return *this * a.inv();
    }
    bool operator == (const ModInt &a) const {
        return x == a.x;
    };
    bool operator != (const ModInt &a) const {
        return x != a.x;
    };
    void operator += (const ModInt &a) {
        x += a.x;
        if (x >= mod) x -= mod;
    }
    void operator -= (const ModInt &a) {
        x -= a.x;
        if (x < 0) x += mod;
    }
    void operator *= (const ModInt &a) {
        x = 1LL * x * a.x % mod;
    }
    void operator /= (const ModInt &a) {
        *this = *this / a;
    }
    friend ModInt operator + (int y, const ModInt &a) {
        int x0 = y + a.x;
        return ModInt(x0 < mod ? x0 : x0 - mod);
    }
    friend ModInt operator - (int y, const ModInt &a) {
        int x0 = y - a.x;
        return ModInt(x0 < 0 ? x0 + mod : x0);
    }
    friend ModInt operator * (int y, const ModInt &a) {
        return ModInt(1LL * y * a.x % mod);
    }
    friend ModInt operator / (int y, const ModInt &a) {
        return ModInt(y) / a;
    }
    friend ostream &operator<<(ostream &os, const ModInt &a) {
        return os << a.x;
    }
    friend istream &operator>>(istream &is, ModInt &t) {
        return is >> t.x;
    }

    ModInt pow(int64_t n) const {
        ModInt res(1), mul(x);
        while (n) {
            if (n & 1) res *= mul;
            mul *= mul;
            n >>= 1;
        }
        return res;
    }

    ModInt inv() const {
        int a = x, b = mod, u = 1, v = 0;
        while (b) {
            int t = a / b;
            a -= t * b;
            swap(a, b);
            u -= t * v;
            swap(u, v);
        }
        if (u < 0) u += mod;
        return u;
    }

};
using mint = ModInt<998244353>;

int a[N];
int n, m, k, S;

//Let's BEGIN!!!==============================================================

void solve() {

    cin >> n >> S;
    vector<array<int, 3>> edge(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        cin >> edge[i][0] >> edge[i][1] >> edge[i][2];
    }

    DSU dsu(n);

    sort(edge.begin(), edge.end(), [&](array<int, 3> a, array<int, 3> b) {
        return a[2] < b[2];
    });

    mint ans = 1;
    for (int i = 0; i < n - 1; ++i) {
        int u = edge[i][0], v = edge[i][1], w = edge[i][2];
        int sz1 = dsu.sz[dsu.find(u)], sz2 = dsu.sz[dsu.find(v)];
        dsu.merge(u, v);
        ans *= mint(S + 1 - w).pow(1ll * sz1 * sz2 - 1);
    }

    cout << ans << '\n';
}

signed main() {

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int _;
    cin >> _;
    while (_--) {
        solve();
    }

    return 0;
}