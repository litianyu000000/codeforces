#include<iostream>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long LL;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        vector<vector<int>> b(n, vector<int>(m));
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++)
                cin >> a[i][j], b[i][j] = a[i][j];
        for(int i = 0; i < n; i++)
            sort(b[i].begin(), b[i].end());
        int c1 = -1, c2 = -1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (a[i][j] != b[i][j]){
                    if (c1 == -1) c1 = j;
                    else if (c2 == -1) c2 = j;
                }
            }
            if (c1 != -1) break;
        }
        if (c1 == -1) c1 = 0, c2 = 0;
        if (c1 != -1){
            for(int i = 0; i < n; i++)
                swap(a[i][c1], a[i][c2]);
        }
        bool success = 1;
        for(int i = 0; i < n; i++)
            if (!is_sorted(a[i].begin(), a[i].end())){
                success = 0;
                break;
            }
        if (success) cout << c1 + 1 << ' ' << c2 + 1 << '\n';
        else cout << -1 << '\n';
    }
}