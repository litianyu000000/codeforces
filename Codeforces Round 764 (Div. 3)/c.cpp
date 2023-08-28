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
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		while(a[i]>n)a[i]/=2;
	}
	map<int,int>mp;
	for(int i=0;i<n;i++){
	mp[a[i]]++;
	}
	vector<bool>b(n,false);
	for(int i=n;i>=1;i--){
		while(mp[i]>1){
			mp[i/2]++;
			mp[i]--;
		}
	}
	bool f=true;
	for(int i=1;i<=n;i++){
		if(!mp[i]){
			f=false;
		}
	}
	if(f)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
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
  