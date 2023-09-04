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
	map<int,int>mp;
	for(int i=0;i<n;i++)
		cin>>a[i],mp[a[i]]++;
	k%=(n+1);
	int ans;
	for(int i=0;i<=n;i++){
		if(!mp[i]){
			ans=i;break;
		}
	}
	if(k==0){
		for(int i=0;i<n;i++)
			cout<<a[i]<<' ';
		cout<<endl;
		return;
	}
	vector<int>b(2*n+2);
	b[0]=ans;
	for(int i=1;i<=n;i++)
		b[i]=a[i-1];
	for(int i=n+1;i<2*(n+1);i++)
		b[i]=b[i-n-1];
	for(int i=n+1-k+1,j=0;j<n;j++,i++)
		cout<<b[i]<<' ';
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
  