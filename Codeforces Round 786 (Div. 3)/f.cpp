#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve()
{
	int n, m, q; cin>>n>>m>>q;
	string s[n];
	for(int i=0;i<n;i++) cin>>s[i];
	int colcnt[m+1] = {0};
	int tot = 0;
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++) colcnt[i] += (s[j][i] == '*'), tot += (s[j][i] == '*');
	}
	while(q--)
	{
	    int x, y; cin>>x>>y; x--; y--;
	    
	    if(s[x][y] == '*') colcnt[y]--, s[x][y] = '.', tot--;
	    else colcnt[y]++, s[x][y] = '*', tot++;
	    
	    int c = tot / n, r = tot - n * c;
	    int t = 0;
	    for(int i=0;i<c;i++) t += colcnt[i];
	    for(int i=0;i<r;i++) t += (s[i][c] == '*');
	    
	    cout<<tot - t <<'\n'; 
	}
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
  