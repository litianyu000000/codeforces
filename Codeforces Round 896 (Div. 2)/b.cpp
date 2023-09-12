#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int x[200010],y[200010];

int d(int a,int b){
	return abs(x[a]-x[b])+abs(y[a]-y[b]);
}


void solve(){
	int n,k,a,b;cin>>n>>k>>a>>b;
	for(int i=1;i<=n;i++)
		cin>>x[i]>>y[i];
	int ans1=d(a,b);
	int ans2=ans1,ans3=ans1;
	for(int i=1;i<=k;i++){
	ans2=min(ans2,d(i,a));	
	}
	for(int i=1;i<=k;i++)
		ans3=min(ans3,d(i,b));
	cout<<min(ans1,ans2+ans3)<<endl;
}

signed  main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
  