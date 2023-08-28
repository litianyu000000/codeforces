#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;
//思想就是把他倒过来看重合不
int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1, j = n; i <= n; i++){
            while(j >= 1 && a[j] < i) j--;
            b[i] = j;
        }
        cout << (a == b ? "YES" : "NO") << '\n';
    }

}

/*void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n + 1), b(n + 1000);
    bool ok = true;
    for (int i = 1; i <= n; i ++) {
        std::cin >> a[i];
        if (a[i] > n) ok = false;
    }
    if (!ok) {
        std::cout << "NO\n";
        return ;
    }
    for (int i = 1; i <= n; i ++) {
        b[1] ++;
        b[a[i] + 1] --;
    }
    for (int i = 1; i <= n; i ++) b[i] += b[i - 1];
    for (int i = 1; i <= n; i ++) if (a[i] != b[i]) ok = false;
    if (ok) std::cout << "YES\n";
    else std::cout << "NO\n";
}*/