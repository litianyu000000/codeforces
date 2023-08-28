/*对区间[l,r],如果区间已经有序等于没操作.
对于一个区间,显然前缀的0和后缀的1是没用的,所以我们只需找到第一个
1的位置,最后一个0的位置,其实等价于给
[l,r]排序,拿个set维护以下这种等价类有多少种即可.*/
#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s;cin>>s;
    vector<int>pre(n,-1),nxt(n,n);
    for(int i=0;i<n;i++){
        if(i>0)pre[i]=pre[i-1];
        if(s[i]=='0')pre[i]=i;
    }
    for(int i=n-1;i>=0;i--){
        if(i<n-1)nxt[i]=nxt[i+1];
        if(s[i]=='1')nxt[i]=i;
    }
    set<pii>st;
    while(m--)
    {
        int l,r;cin>>l>>r;
        l--,r--;
        if(nxt[l]>pre[r]){
            st.insert({-1,-1});
        }
        else st.insert({nxt[l],pre[r]});
    }
    cout<<st.size()<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

