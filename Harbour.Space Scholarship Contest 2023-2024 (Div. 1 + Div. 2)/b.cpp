#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int n,k;cin>>n>>k;
	string s;cin>>s;
	if(k%2==0){
		sort(s.begin(),s.end());
		cout<<s<<endl;
	}
	else{
		string a="",b="";
		for(int i=0;i<n;i++){
			if(i%2){
				a+=s[i];
			}else{
				b+=s[i];
			}
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		string ans="";
		int ia=0,ib=0;
		for(int i=0;i<n;i++){
			if(i%2)ans+=a[ia],ia++;
			else ans+=b[ib],ib++;
		}
		cout<<ans<<endl;
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
  