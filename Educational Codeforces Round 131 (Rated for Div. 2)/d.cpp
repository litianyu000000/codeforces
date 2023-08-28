#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
const int maxn=200010;
typedef pair<int,int> pii;

/*
// floor(i / a[i]) = b[i]
// b[i] <= i / a[i] < b[i]+1
// i/b[i] >= a[i] > i/(b[i]+1)
接下来就是一个贪心匹配问题了，肯定是选取最左边的区间，
然后在可达右区间最小的位置先进行放置，
这样子才可以让后面的位置有尽可能多的位置1选择，
用一个集合来维护当前合法的位置即可
*/
int a[maxn]={0};
int l[maxn]={0};
int r[maxn]={0};
vector<array<int,2> > t[maxn];
signed main(){
    int T;cin>>T;
    while(T--){
      int n;cin>>n;
      set<pair<int,int> > s;
      for(int i=1;i<=n;i++){
          t[i].clear();
      }
      for(int i=1;i<=n;i++){
          int x;cin>>x;
          int l,r;
          if(!x){
              l=i+1;
              r=n;
          }else{
              l=i/(x+1)+1;
              r=min(i/x,n);
          }
          t[l].push_back({r,i});
      }
      for(int i=1;i<=n;i++){
          for(auto [r,id]:t[i]){
              s.insert({r,id});
          }
          int minn=s.begin()->second;
          auto now=s.begin();
          a[minn]=i;
          s.erase(now);
      }
      for(int i=1;i<=n;i++){
          cout<<a[i]<<' ';
      }
      puts("");
    }
}