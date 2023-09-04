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
	vector<int>b(k),c(k);
	for(int i=0;i<k;i++)
		cin>>b[i]>>c[i];
	map<int,int>l,r,cnt;
	for(int i=0;i<n;i++){
		l[a[i]]=0x3f3f3f3f;
		r[a[i]]=-1;
		cnt[a[i]]++;
	}
	for(int i=0;i<n;i++){
		l[a[i]]=min(i,l[a[i]]);
		r[a[i]]=max(i,r[a[i]]);
	}
	for(int i=0;i<k;i++){
		if(!cnt[b[i]]||!cnt[c[i]]){
			cout<<"NO"<<endl;continue;
		}
		if(l[b[i]]<=r[c[i]]){
			cout<<"YES"<<endl;continue;
		}
		cout<<"NO"<<endl;
	}
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
  