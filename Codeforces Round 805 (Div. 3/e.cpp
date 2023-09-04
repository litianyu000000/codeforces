#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector> 
#include <queue>

using namespace std;
const int N = 2e5 + 10;
typedef pair<int, int > PII;
string s;
int n, m;
int p[N], cnt[N] , sz[N];

int find(int x)
{
    if(x != p[x]) p[x] = find(p[x]);
    return p[x];
}

void merge(int a, int b)
{
    a = find(a) , b = find(b);
    if(a != b)
    {
        p[a] = b;
        sz[b] += sz[a];
    }
}

void solve()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i ++ ) cnt[i] = 0 , p[i] = i , sz[i] = 1;
    for(int i = 1 ; i <= n ; i ++ )
    {
        int a, b;
        cin >> a >> b;
        merge(a, b);
        cnt[a] ++ , cnt[b] ++ ;
    }
    
    for(int i = 1 ; i <= n ; i ++ )
    {
        if(cnt[i] != 2) 
        {
            puts("NO");
            return ;
        }
    }
    
    for(int i = 1 ; i <= n ; i ++ )
    {
        if(p[i] != i) continue;
        if(sz[find(i)] & 1) 
        {
            puts("NO");
            return ;
        }
    }
    puts("YES");

}

signed main()
{
    int T;
    cin >> T;
    while(T -- ) solve();
    return 0;
}