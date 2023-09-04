#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int c[1000010];

void solve(){
	int n;cin>>n;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++)
		cin>>a[i];
	vector<int>b(n+1);
	for(int i=1;i<=n;i++){
		b[a[i]]=i;
	}
	int ans=0;
	for(int i=1;i<n;i++){
		if(b[i]>b[i+1])ans++;
	}
	if(!ans)
		cout<<0<<endl;
	else
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
  