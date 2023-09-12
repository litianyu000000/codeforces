#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
using LL = long long;
const int maxn = 1e7 + 5;
bool isPrime[maxn];
int primes[maxn], cnt;
void init(){
    isPrime[1] = 1;
    for(int i = 2; i < maxn; i++){
        if (!isPrime[i]) primes[cnt++] = i;
        for(int j = 0; i * primes[j] < maxn; j++){
            isPrime[i * primes[j]] = 1;
            if (i % primes[j] == 0) break;
        }
    }
}	

int main(){

    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    init();
    int T;
    cin >> T;
    while(T--){
        int l, r;
        cin >> l >> r;
        int s = -1;
        for(int i = max(l, 4); i <= r; i++){
            if (isPrime[i]){
                s = i;
                break;
            }
        }
        if (s == -1){
            cout << -1 << '\n';
            continue;
        }
        for(int i = 2; i * i <= s; i++){
            if (s % i == 0){
                cout << i << ' ' << s - i << '\n';
                break;
            }
        }

    }

}