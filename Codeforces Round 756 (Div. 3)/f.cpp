#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
/*双指针对数组a求最大连续子序列和
对某一段l-r区间满足答案要求，则更新答案，跳右指针。
若跳完右指针不满足条件，则不断跳 l 直到满足条件。*/

void solve(){
	int n,s;cin>>n>>s;
	int l=1,r=1;
	int sum=0;
	int ansl=-1,ansr=-1;
	vector<int>a(n+1);
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	while(l<=n&&r<=n+1){
		if(sum+s>=0){
			if(r-l>ansr-ansl)ansr=r,ansl=l;
			sum+=a[r++];
		}else{
			sum-=a[l++];
		}
	}
	if(ansr==-1){
		cout<<-1<<endl;
	}else{
		cout<<ansl<<' '<<ansr-1<<endl;
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
  