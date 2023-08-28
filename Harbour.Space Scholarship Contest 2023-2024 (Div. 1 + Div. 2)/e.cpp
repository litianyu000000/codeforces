#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int x,y,n;cin>>x>>y>>n;
	vector<int>a(n);
	int id=1,k=2;
	a[n-1]=y;
	for(int i=n-2;i>=0;i--){
		if(y-id<x){
			cout<<"-1"<<endl;return;
		}
		a[i]=y-id;
		id+=k;
		k++;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<' ';
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
  