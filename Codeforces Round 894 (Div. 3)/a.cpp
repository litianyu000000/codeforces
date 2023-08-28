#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
char c[25][25];

void solve(){
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>c[i][j];
	vector<bool>f(4,false);
	string s="vika";
	if(m<4){
		cout<<"NO"<<endl;return;
	}
	int id=0;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(c[j][i]==s[id])
				f[id]=true;
		}
		if(f[id])id++;
	}
	if(f[0]&&f[1]&&f[2]&&f[3])
		cout<<"YES"<<endl;
	else 
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
  