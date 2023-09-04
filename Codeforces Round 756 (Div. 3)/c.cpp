#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
/*容易发现数组a的最大值n, 一定出现在p数组的两端.
也就是说如果如果数组p的两端不存在n, 那么就是不合法的.
然后我们发现了一种构造做法:
在构造数组a的时候, 把n放在一端, 那么每次拿去构造数组p的元素都是在非n端的元素.
于是只需要把数组p翻转即可得到一种可行的数组a.*/

void solve(){
	int n;cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	if(a[0]==n||a[n-1]==n){
		for(int i=n-1;i>=0;i--)
			cout<<a[i]<<' ';
		cout<<endl;
		return ;
	}
	cout<<-1<<endl;
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
  