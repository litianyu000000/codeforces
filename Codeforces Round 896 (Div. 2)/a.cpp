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
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(n%2==0){
		cout<<2<<endl;
		cout<<1<<' '<<n<<endl;
		cout<<1<<' '<<n<<endl;
	}else{
		cout<<4<<endl;
		cout<<2<<' '<<n<<endl;
		cout<<2<<' '<<n<<endl;
		cout<<1<<' '<<2<<endl;
		cout<<1<<' '<<2<<endl;
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
