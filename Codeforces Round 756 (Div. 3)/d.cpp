#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int n;cin>>n;
	vector<int>b(n+1),p(n+1);
	int root;
	for(int i=1;i<=n;i++){
		cin>>b[i];
		if(i==b[i])root=i;
	}
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	if(p[1]!=root){
		cout<<-1<<endl;return;
	}
	vector<int>d(n+1,0),vis(n+1,1),res(n+1,0);
	vis[root]=0;
	for(int i=2;i<=n;i++){
		if(vis[b[p[i]]]){
			cout<<-1<<endl;return;
		}
		res[p[i]]=max(1LL,d[p[i-1]]-d[b[p[i]]]+1);
		d[p[i]]=d[b[p[i]]]+res[p[i]];
		vis[p[i]]=0;
	}
	for(int i=1;i<=n;i++)cout<<res[i]<<' ';cout<<endl;
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
  