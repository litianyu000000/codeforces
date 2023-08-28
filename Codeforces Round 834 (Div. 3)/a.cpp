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
	if(s.size()==1){
		if(s=="e"||s=="s"||s=="Y"){
			cout<<"YES"<<endl;return;
		}else{
			cout<<"NO"<<endl;return;
		}
	}else if(s.size()==2){
		if(s=="Ye"||s=="es"||s=="sY"){
			cout<<"YES"<<endl;return ;
		}else{
			cout<<"NO"<<endl;return;
		}
	}
	for(int i=0;i<s.size();i++){
		if(s[i]!='e'&&s[i]!='s'&s[i]!='Y'){
			cout<<"NO"<<endl;return;
		}else{
			if(i>0&&i<s.size()-1){
				if(s[i]=='e'){
					if(s[i-1]!='Y'||s[i+1]!='s'){
						cout<<"NO"<<endl;return;
					}
				}else if(s[i]=='Y'){
					if(s[i-1]!='s'||s[i+1]!='e'){
						cout<<"NO"<<endl;return;
					}
				}else{
					if(s[i-1]!='e'||s[i+1]!='Y'){
						cout<<"NO"<<endl;return;
					}
				}
			}
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
  