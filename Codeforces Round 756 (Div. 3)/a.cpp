#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	string s;cin>>s;
	if((s[s.size()-1]-'0')%2==0){
		cout<<0<<endl;return;
	}
	bool f=false;
	for(int i=0;i<s.size();i++){
		if((s[i]-'0')%2==0)f=true;
	}
	if(!f){
		cout<<-1<<endl;return;
	}
	if((s[0]-'0')%2==0){
		cout<<1<<endl;
	}else{
		cout<<2<<endl;
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
  