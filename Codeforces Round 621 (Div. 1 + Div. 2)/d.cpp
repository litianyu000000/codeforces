#include <bits/stdc++.h>
using namespace std;
#define IO std::ios::sync_with_stdio(false)
#define int long long
#define INF 0x3f3f3f3f

/*首先先通过两次 bfs 求出 1 到这些点的最短路，记录在数组dis1中；n到这些点的最短路，记录在数组dis2中；
那么如果连边对 1 — > n 的最短路产生了影响，即连边后的最大最短路大于原始的最短路，那么答案就取连边后的最大最短路，否则取原始的最短路。
我们考虑如何求连边后的最大最短路，最大最短路 即 max ( min ( dis1[a] + dis2[b] +1 , dis1[b] + dis2[a] + 1)) （a,b为之前给出的那些点里的任意两个） ，
我们不妨假设 dis1[a] + dis2[b] <= dis2[b] + dis1[a] ，
那么我们只要找 dis1[a] + dis2[b] 的最大值，移项不等式即 dis1[a] - dis2[a] <= dis1[b] - dis2[b] 我们根据这个排序，
向后枚举每次更新最大的 dis1[a] ，并同时更新答案 dis1[a] + dis2[b] + 1。
最后记得和原始的最短路比较。
*/

const int maxn = 2e5+10;
int n,m,k;
int a[maxn];
int dis1[maxn],dis2[maxn];
vector<int> G[maxn];
void bfs(int *dis,int s) {
    fill(dis, dis + n + 1, INF);
    queue<int> q;
    q.push(s);
    dis[s] = 0;
    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (auto it : G[v]) {
            if (dis[it] == INF) {
                dis[it] = dis[v] + 1;
                q.push(it);
            }
        }
    }
}
struct Node {
    int x, y;

    Node(int _x, int _y) { x = _x, y = _y; }

    bool operator<(const Node &no) const {
        return x < no.x;
    }
};
vector<Node> memo;
signed main() {
    IO;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++) cin >> a[i];
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    bfs(dis1, 1);
    bfs(dis2, n);
    for (int i = 0; i < k; i++) memo.emplace_back(Node(dis1[a[i]] - dis2[a[i]], a[i]));
    sort(memo.begin(), memo.end());
    int ans = 0;
    int mx = -INF;
    for (auto it : memo) {
        ans = max(ans, mx + dis2[it.y] + 1);
        mx = max(mx, dis1[it.y]);
    }
    ans = min(ans, dis1[n]);
    cout << ans << endl;
    return 0;
}
