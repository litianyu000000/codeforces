#include<iostream>
#include<cstring>
#include<vector>
#include<array>
using namespace std;
using LL = long long;

//pre记录使得1...i递减的最少次数
//如果a[i]>=a[i-1]，执行一次操作，使得前边的数乘以一个足够大的数，符合要求
//suf记录使得i...n递减的最少次数
//如果a[i]>=a[i+1]，执行一次操作，使得后边的数乘以一个足够大的数，符合要求。
//但是数字可以变成负数,所以一种可能的方案是把某个前缀变成递减的,然后乘上一个负数,这样就变成递增的了,然后剩下的后缀还是要变成递增的正数.
//枚举一下分界点更新答案即可.

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        if (n == 1){
            cout << 0 << '\n';
            continue;
        }
        vector<array<int, 2> > s(n + 1);
        for(int i = 1; i <= n - 1; i++){
            s[i] = s[i - 1];
            if (a[i] >= a[i + 1]) s[i][0] += 1;
            if (a[i] <= a[i + 1]) s[i][1] += 1;
        }
        int ans = min(s[n - 1][0], s[n - 2][1] + 1);
        int cnt = 0;
        for(int i = n - 1; i >= 2; i--){
            cnt += (a[i] >= a[i + 1]);
            ans = min(ans, cnt + s[i - 2][1] + 1);
        }
        cout << ans << '\n';
    }

}
/*void solve() {
	int n; cin >> n;
	int a[n + 1];
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	
	vector<int> pre(n + 1, 1e9), 
				suf(n + 1, 1e9);
				
	pre[1] = 0;
	
	for(int i = 2; i <= n; i++) {
		pre[i] = pre[i - 1] + (a[i] >= a[i - 1]);
	}
	
	suf[n] = 0;
	for(int i = n - 1; i >= 1; i--) {
		suf[i] = suf[i + 1] + (a[i] >= a[i + 1]);
	}
	
	int ans = min(pre[n] + 1, suf[1]);
	for(int i = 1; i < n; i++) {
		ans = min(ans, pre[i] + 1 + suf[i + 1]);
	}
	
	cout << ans << '\n';
	
}*/