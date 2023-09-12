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
	vector<int>ans(n);
	for(int i=0;i<n-1;i++){
		ans[i]=i+2;
	}
	ans[n-1]=1;
	for(int i=0;i<n;i++)
		cout<<ans[i]<<' ';
	cout<<endl;
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
  