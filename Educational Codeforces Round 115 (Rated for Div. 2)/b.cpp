#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

string solve()
{
	int n;cin>>n;
	int arr[n+1][6];
	for(int i=1;i<=n;i++)
		for(int j=1;j<=5;j++) 
			cin>>arr[i][j];
	for(int i=1;i<=5;i++){
		for(int j=i+1;j<=5;j++){
		int a=0,b=0,c=0,d=0;
		for(int k=1;k<=n;k++){
			if(arr[k][i] && !arr[k][j]) a++;
			if(!arr[k][i] && arr[k][j]) b++;
			if(arr[k][i] && arr[k][j]) c++;
			if(!arr[k][i] && !arr[k][j]) d++;
		}
		if(d!=0) continue;
		if(a+c>=n/2 && b+c>=n/2) return "YES";
	}
}
	return "NO";
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        cout<<solve()<<endl;;
    }
    return 0;
}
  