#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int n;
	cin>>n;
	vector<int>a(n),b;
	for(int i=0;i<n;i++)
		cin>>a[i];
	b.push_back(a[0]);
	for(int i=1;i<n;i++){
		if(a[i]<a[i-1]){
			b.push_back(a[i]);
			b.push_back(a[i]);
		}else{
			b.push_back(a[i]);
		}
	}
	cout<<b.size()<<endl;
	for(int i=0;i<b.size();i++)
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
  