#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	int n;cin>>n;
	int l=0,r=2e10;
	auto check=[&](int mid){
		int res=mid*mid-mid;
		return res-n<=n;
	};
	while(l+1!=r){
		int mid=l+r>>1;
		if(check(mid))
			l=mid;
		else
			r=mid;
	}
	cout<<l+n-(l*l-l)/2<<endl;
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
  