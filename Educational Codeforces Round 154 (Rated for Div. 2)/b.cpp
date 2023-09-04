#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	string a,b;cin>>a>>b;
	for(int i=0;i<a.size();i++){
		if(a[i]==b[i]&&a[i]=='0'&&a[i+1]==b[i+1]&&a[i+1]=='1'){
			cout<<"YES"<<endl;return;
		}
	}
	cout<<"NO"<<endl;
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
  