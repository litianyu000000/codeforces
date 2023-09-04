#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	string s,t;cin>>s>>t;
	if(count(t.begin(),t.end(),'a')!=0){
		if(t.size()==1){
			cout<<1<<endl;
		}else{
			cout<<-1<<endl;
		}
		return;
	}
	int ans=1;
	for(int i=0;i<s.size();i++){
		ans*=2;
	}
	cout<<ans<<endl;
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
