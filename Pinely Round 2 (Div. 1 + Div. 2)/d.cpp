#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

char a[550][550],b[550][550];

void solve() {
	int n,m;
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> a[i][j];
			b[i][j] = '.';
		}
	}
 
	for (int i = 1; i <= n; ++i) {
		int cnt = 0;
		for (int j = 1; j <= m; ++j) {
			if (a[i][j] != '.') {
				cnt++;
			}
		}
		if (cnt & 1) {
			cout << "-1\n";
			return;
		}
	}
 
	for (int i = 1; i <= m; ++i) {
		int cnt = 0;
		for (int j = 1; j <= n; ++j) {
			if (a[j][i] != '.') {
				cnt++;
			}
		}
		if (cnt & 1) {
			cout << "-1\n";
			return;
		}
	}
 
	for (int i = 1; i <= n; ++i) {
		int idx = 0;
		for (int j = 1; j <= m; ++j) {
			if (a[i][j] == 'U') {
				if (idx & 1) {
					b[i][j] = 'W';
					b[i + 1][j] = 'B';
					idx++;
				} else {
					b[i][j] = 'B';
					b[i + 1][j] = 'W';
					idx++;
				}
			}
		}
	}
 
	for (int i = 1; i <= m; ++i) {
		int idx = 0;
		for (int j = 1; j <= n; ++j) {
			if (a[j][i] == 'L') {
				if (idx & 1) {
					b[j][i] = 'W';
					b[j][i + 1] = 'B';
					idx++;
				} else {
					b[j][i] = 'B';
					b[j][i + 1] = 'W';
					idx++;
				}
			}
		}
	}
 
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cout << b[i][j];
		}
		cout << '\n';
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
  