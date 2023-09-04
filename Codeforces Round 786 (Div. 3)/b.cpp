#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	map<string,int>mp;
	int k=1;
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			if(i==j)continue;
			string s="";
			s+=(i+'a');
			s+=(j+'a');
			mp[s]=k;
			k++;
		}
	}
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		cout<<mp[s]<<endl;
	}
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
  