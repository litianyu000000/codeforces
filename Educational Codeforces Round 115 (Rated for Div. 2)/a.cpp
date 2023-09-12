#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	string a,b;
	int n;cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		if(a[i]=='1'&&b[i]=='1'){
			cout<<"NO"<<endl;return ;
		}
	}
	cout<<"YES"<<endl;
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
  