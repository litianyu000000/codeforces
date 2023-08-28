#include<bits/stdc++.h>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;
//发现最优解一定是把某个后缀翻转,所以可以枚举翻转的后缀长度然后暴力模拟

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
        for(int i = 1; i <= n; i++) a[i] = i;
        int ans = 0;
        for(int i = 1; i <= n; i++){
            auto b = a;
            reverse(b.begin() + i, b.end());
            int sum = 0, mx = 0;
            for(int j = 1; j <= n; j++){
                sum += j * b[j];
                mx = max(mx, j * b[j]);
            }
            ans = max(ans, sum - mx);
        }
        cout << ans << '\n';
    }

}