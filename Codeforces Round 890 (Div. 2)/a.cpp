#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;

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
        for(int i = 0; i < n; i++) cin >> a[i];
        int mx = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if (a[i] > a[j]){
                    mx = max(mx, a[i]);
                }
            }
        }
        cout << mx << '\n';
    }

}