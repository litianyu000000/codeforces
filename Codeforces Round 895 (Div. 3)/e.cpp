#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize(3)
typedef long long ll;
#define int long long
typedef pair<int, int> P;
const int N = 1e6+7, mod = 1e9+7;
ll n, m, k;

inline void run(){
	cin >> n;
	
	std::vector<ll> a(n + 1),b(n + 1, 0);
	for(int i = 1; i <= n; i ++ ){
		cin >> a[i];
		b[i] = b[i - 1] ^ a[i];
	}
	
	string w;
	cin >> w;
	ll sum1 = 0, sum0 = 0;
	for(int i = 0; i < n; i ++ ){
		if(w[i] == '1') sum1 ^= a[i + 1];
		else sum0 ^= a[i + 1];
	}
	
	cin >> m;
	ll op, l, r, x;
	for(int i = 1; i <= m; i ++ ){
		cin >> op;
		if(op == 2){
			cin >> x;
			if(x == 1) cout << sum1 << ' ';
			else cout << sum0 << ' ';
		}
		if(op == 1){
			cin >> l >> r;
			sum1 ^= (b[r] ^ b[l - 1]);
			sum0 ^= (b[r] ^ b[l - 1]);
		}
	}

	cout << '\n';
}
signed main(){
    std::ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int T;
    for(std::cin>>T;T>0;T--)
    run(); return 0;
}