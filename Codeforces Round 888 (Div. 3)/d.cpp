#include<iostream>
#include<cstring>
#include<vector>
#include<set>
using namespace std;
using LL = long long;

/*先差分看看哪些数字已经出现过了,如果没出现的数字只能有1个那么一定有解,如果没出现的数字有
个,然后看看多出来的数字能不能拆成这两个数字的和,如果没出现的数字大于2个,则无解.*/

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<LL> a(n);
        for(int i = 1; i <= n - 1; i++) cin >> a[i];
        vector<bool> v(n + 1);
        vector<LL> r;
        for(int i = 1; i <= n - 1; i++){
            LL t = a[i] - a[i - 1];
            if (t >= 1 && t <= n && !v[t]){
                v[t] = true;
            }
            else{
                r.push_back(t);
            }
        }
        if (r.size() >= 2){
            cout << "No" << '\n';
            continue;
        }
        if (r.size() == 0){
            cout << "Yes" << '\n';
            continue;
        }
        LL sum = 0;
        for(int i = 1; i <= n; i++){
            if (!v[i]){
                sum += i;
            }
        }
        cout << (sum == r[0] ? "Yes" : "No") << '\n';
    }

}