#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
	vector<int>a(7);
	for(int i=0;i<7;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	cout<<a[0]<<' '<<a[1]<< ' '<<a[6]-a[1]-a[0]<<endl;
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
  