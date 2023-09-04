#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int n,a,q;cin>>n>>a>>q;
	string s;cin>>s;
	if(n==a){
		cout<<"YES"<<endl;
	}else{
		int cnt=0,x=a;
		bool f=false;
		for(int i=0;i<q;i++){
			if(s[i]=='+')
				a++,cnt++;
			else
				a--,f=true;
			if(a>=n){
				cout<<"YES"<<endl;return;
			}
		}
		if(x+cnt<n){
			cout<<"NO"<<endl;
		}else{
			cout<<"MAYBE"<<endl;
		}
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
  