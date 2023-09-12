#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int ans=0x3f3f3f3f;
	int n;cin>>n;
	vector<pii>a(n);
	for(int i=0;i<n;i++){
		auto &[x,y]=a[i];
		cin>>x>>y;
	}
	for(auto &[x,y]:a){
		ans=min(ans,x+(y-1)/2);
	}
	cout<<ans<<endl;
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
  