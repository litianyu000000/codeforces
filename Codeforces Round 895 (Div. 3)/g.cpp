#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    
    const LL lim = 1e15;

    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        vector<LL> a(n + 1);
        for(int i = 1; i <= n; i++) cin >> a[i];
        int st = 1, ed = n;
        while(st <= n && a[st] == 1) st++;
        while(ed >= 1 && a[ed] == 1) ed--;
        if (st > ed){
            cout << 1 << ' ' << 1 << '\n';
            continue;
        }
        bool ok = false;
        LL mul = 1;
        for(int i = 1; i <= n; i++){
            if (__int128_t(mul) * a[i] > lim){
                ok = true;
                break;
            }
            mul *= a[i];
        }
        if (ok){
            cout << st << ' ' << ed << '\n';
            continue;
        }
        vector<LL> s1(n + 1), s2(n + 1);
        s2[0] = 1;
        vector<int> cand;
        for(int i = 1; i <= n; i++){
            s1[i] = s1[i - 1] + a[i];
            s2[i] = s2[i - 1] * a[i];
            if (a[i] > 1) cand.push_back(i);
        }
        LL ans = s1[n];
        pair<int, int> res = {1, 1};
        for(int i = 0; i < cand.size(); i++){
            for(int j = i; j < cand.size(); j++){
                int l = cand[i];
                int r = cand[j];
                LL t = s2[r] / s2[l - 1] + s1[n] - s1[r] + s1[l - 1];
                if (t > ans){
                    ans = t;
                    res = {l, r};
                }
            }
        }
        cout << res.first << ' ' << res.second << '\n';
    }

}