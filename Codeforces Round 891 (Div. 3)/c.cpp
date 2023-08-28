#include<iostream>
#include<cstring>
#include<vector>
#include<map>
using namespace std;
using LL = long long;

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    const int INF = 1e9;
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n * (n - 1) / 2; i++){
            int x;
            cin >> x;
            mp[x] += 1;
        }
        vector<int> ans;
        for(int i = n - 1; i >= 1; i--){
            auto [x, y] = *mp.begin();
            ans.push_back(x);
            if (y == i) mp.erase(x);
            else mp[x] -= i;
        }
        ans.push_back(INF);
        for(auto x : ans) cout << x << ' ';
        cout << '\n';
    }

}