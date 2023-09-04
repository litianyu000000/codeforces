#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	map<char,int>mp;
	string s;cin>>s;
	int cnt=0,ans=0;
	for(int i=0;i<s.size();i++){
		if(!mp[s[i]]&&cnt<3){
			mp[s[i]]++;cnt++;
		}else if(!mp[s[i]]&&cnt==3){
			mp.clear();
			cnt=1;mp[s[i]]++;ans++;
		}
	}
	if(cnt)ans++;
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
  