#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

int lowbit(int x){
	return x&-x;
}

void solve(){
	int n;cin>>n;
	vector<int>ans(1010);
	int cnt=1;
	ans[0]=n;
	while(n>1){
		if(n==lowbit(n)){
			n/=2;
			ans[cnt++]=n;
		}else{
			ans[cnt++]=n-lowbit(n);
			n-=lowbit(n);
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++)
		cout<<ans[i]<<' ';
	cout<<endl;
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
  