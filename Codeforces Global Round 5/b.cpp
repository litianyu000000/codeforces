// #include<bits/stdc++.h>
// #define int long long
// #define x first
// #define y second
// #define endl '\n'
// #define pq priority_queue
// using namespace std;
// typedef pair<int,int> pii;

// void solve()
// {
//      int n;cin>>n;
//      vector<int>a(n+1),b(n+1);
//      vector<int>to(n+1),out(n+1);
//      for(int i=1;i<=n;i++){
//         cin>>a[i];
//         to[a[i]]=i;//进来的时候的标号
//      }
//      for(int i=1;i<=n;i++){
//         cin>>b[i];
//         out[to[b[i]]]=i;//第几个进来的出去的时候是第几个
//      }
//      int ans=0,ma=-1;
//      for(int i=1;i<=n;i++){
//         if(out[i]<ma){
//             ans++;
//         }
//         ma=max(ma,out[i]);
//      }
//      cout<<ans<<endl;
// }

// signed main()
// {
//     ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//     int t=1;
//     while(t--)
//     {
//         solve();
//     }
//     return 0;
// }
//双指针
#include<bits/stdc++.h>
using namespace std;
#define ms(x, n) memset(x,n,sizeof(x));
typedef  long long LL;
const int INF = 1 << 30;
const int MAXN = 1e5+10;

int n, a[MAXN], b[MAXN];
bool used[MAXN];
int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i)
        cin >> b[i];
    int ans = 0;
    for(int i = 1, j = 1; i <= n && j <= n;){
        if(used[a[i]]){
            ++i;
            continue;
        }if(a[i] == b[j])
            ++j, ++i;
        else
            used[b[j]] = true, ++ans, ++j;

    }
    cout << ans << endl;

    return 0;
}
