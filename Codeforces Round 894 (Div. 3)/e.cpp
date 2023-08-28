#include<iostream>
#include<cstring>
#include<vector>
#include<set>
using namespace std;
using LL = long long;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n, m, d;
        cin >> n >> m >> d;
        LL ans = 0;
        multiset<int> s;
        LL sum = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if (x > 0){
                s.insert(x);
                sum += x;
                if (s.size() > m){
                    sum -= *s.begin();
                    s.erase(s.begin());
                }
                ans = max(ans, sum - 1LL * d * i);
            }
        }
        cout << ans << '\n';
    }

}