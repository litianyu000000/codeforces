#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;
//考虑总和和1的个数
int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n);
        LL s = 0;
        int cnt1 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += a[i] - 1;
            cnt1 += (a[i] == 1);
        }
        if (n == 1){
            cout << "NO" << '\n';
            continue;
        }
        cout << (s >= cnt1 ? "YES" : "NO") << '\n';
    }

}