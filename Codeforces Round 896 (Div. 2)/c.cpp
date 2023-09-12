#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n,m,i,j,tag;
	for(cin>>T;T>0;T--)
	{
		cin>>n>>m;
		if(m==1)
		{
			cout<<"0\n";
			for(i=0;i<n;i++)cout<<"0\n";
			continue;
		}
		else cout<<min(n+1,m)<<'\n';
		for(i=0;i<n;i++)
		{
			if(i%m==m-1)tag=1;
			else tag=0;
			for(j=0;j<m;j++)cout<<(i+j+tag)%m<<' ';
			cout<<'\n';
		}
	}
	return 0;
}