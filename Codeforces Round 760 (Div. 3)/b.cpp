#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
string s[110];

void solve(){
	int n;cin>>n;
	n-=2;
	for(int i=0;i<n;i++)
		cin>>s[i];
	string ans="";
	ans+=s[0][0];
	bool f=false;
	for(int i=0;i<n-1;i++){
		if(s[i][1]!=s[i+1][0]){
			f=true;
		}
	}
	if(f){
		for(int i=0;i<n-1;i++){
			if(s[i][1]!=s[i+1][0]){
				ans+=s[i][1];ans+=s[i+1][0];
			}else{
				ans+=s[i][1];
			}
		}
		ans+=s[n-1][1];
	}else{
		for(int i=0;i<n;i++){
			ans+=s[i][1];
		}
		ans+=s[n-1][1];
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
  