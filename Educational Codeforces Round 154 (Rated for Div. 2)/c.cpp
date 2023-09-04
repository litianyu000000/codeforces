#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	vector<int>a{1};
	bool ans=true;
	int cnt=0;
	string s;cin>>s;
	for(auto c:s){
		if(c=='+'){
			cnt++;
			int cur=a.back();
			if(cur==1&&cnt>=2)cur=-1;
			a.push_back(cur);
		}else if(c=='-'){
			cnt--;
			int cur=a.back();
			a.pop_back();
			if(cur==1)a.back()=1;
		}else{
			if(c=='0'){
				if(a.back()==1){
					ans=false;break;
				}else if(a.back()==-1){
					a.back()=0;
				}
			}else{
				if(a.back()==0){
					ans=false;break;
				}else if(a.back()==-1){
					a.back()=1;
				}
			}
		}
	}
	if(ans){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
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
