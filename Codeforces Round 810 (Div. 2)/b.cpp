#include <iostream>
#include <cstring>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <cmath>
//题意翻译：给出一个n点m边的无向图，删去一些点，使边数最终为偶数

using namespace std;
//#define int long long
#define NO {puts("NO") ; return ;}
#define YES {puts("YES") ; return ;}
#define please return 
#define ac 0
typedef pair<int, int> PII;
const int N = 2e5 + 10 , INF = 0x3f3f3f3f;
int n, m, a[N];
PII b[N];
int d[N]; // 度数

void solve()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i ++ ) cin >> a[i] , d[i] = 0;
    
    for(int i = 1 ; i <= m ; i ++ )
    {
        int x, y;
        cin >> x >> y;
        d[x] ++ , d[y] ++ ;
        b[i] = {x, y};
    }
    if(m % 2 == 0) cout << 0 << endl;
    else
    {
        int ans = INF;
        for(int i = 1 ; i <= n ; i ++ )
            if(d[i] & 1) ans = min(ans, a[i]);
        for(int i = 1 ; i <= m ; i ++ ) 
        {   // 删除同一对 {x,y} 那么和x匹配的人和y匹配的人的所吃的蛋糕要数量为t
            int t = d[b[i].first] + d[b[i].second] - 1;
            if(t & 1) ans = min(ans, a[b[i].first] + a[b[i].second]);
        }
        cout << ans << endl;
    }

}

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0);
    int T = 1;
    cin >> T;
    while(T -- ) solve();
    please ac;
}