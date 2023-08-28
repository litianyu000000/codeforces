#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
int n,k;
string s;

//一个长度为N的回文串，如果是奇数，有（N-1）/2对相同字符，偶数就是N/2对
void solve(){
	cin>>n>>k;cin>>s;
	int l=1,r=n+1;
	map<char,int>mp;
	for(int i=0;i<n;i++){
		mp[s[i]]++;
	}
	int ans=0;
	for(auto [x,y]:mp){
		ans+=y/2;
	}

	auto check=[&](int mid)->bool{
		if(ans>=k*(mid-(mid&1))/2&&k*mid<=n)
			return true;
		else
			return false;
	};
	while(l+1!=r){
		int mid=l+r>>1;
		if(check(mid))
			l=mid;
		else 
			r=mid;
	}
	cout<<l<<endl;
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
  