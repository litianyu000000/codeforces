#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
//那么我们奇偶位分别遍历一遍找出各自都gcd 然后交叉判断一下就行

int gcd(int a,int b){
	return b?gcd(b,a%b):a;
}

void solve(){
	int n;cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans1=a[0],ans2=a[1];
	for(int i=0;i<n;i+=2)ans1=gcd(ans1,a[i]);
	for(int i=1;i<n;i+=2)ans2=gcd(ans2,a[i]);
	bool f1=false,f2=false;
    for(int i=0;i<n;i+=2)
    	if(a[i]%ans2==0)
    		f2=true;
    for(int i=1;i<n;i+=2)
    	if(a[i]%ans1==0)
    		f1=true;
    if(!f1)
    	cout<<ans1<<endl;
    else if(!f2)
    	cout<<ans2<<endl;
    else
    	cout<<0<<endl;
    
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
  