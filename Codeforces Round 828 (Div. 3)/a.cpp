#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define int long long
#define F(i) for(int i=1;i<=n;i++)
#define x first
#define y second
const int inf = 0x3f3f3f3, N = 3e5+10, mod = 998244353;
const int M=2*N;
const ll INF = 0x3f3f3f3f3f3f3f3f;
const double pi = acos(-1.0);
typedef pair<int, int> PII;
int n,m;
int a[N],v[N];
map<int,int>mp;
inline void solve(){
    cin>>n;
    string s;
    mp.clear();
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>s;
    for(int i=0;i<n;i++){
        if(!mp[a[i]])
        mp[a[i]]=s[i];
        else {
            if(mp[a[i]]!=s[i]){
                puts("NO");
                return ;
            }
        }
    }
    puts("YES");
}
signed main() {
    int _=1;
    cin>>_;
    while (_--)solve();
    return 0;
}