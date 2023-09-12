#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int n,k;cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	int ans=0;
	for(int i=1;i<=k;i++){
		ans+=a[n-i-k]/a[n-i];
	}
	for(int i=0;i<n-2*k;i++)
		ans+=a[i];
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
  