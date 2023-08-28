#include <bits/stdc++.h>
using namespace std;

/*
当gcd(a,b)=a且gcd(a,b)=b时，最少0次
当gcd(a,b)=a或gcd(a,b)=b时，最少1次
当gcd(a,b)！=a且gcd(a,b)！=b时，最少2次
最多操作，将a,b向1转化，质因子的和
*/
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    constexpr int N = 1e5;
    vector<int> isPrime(N, true);
    for (int i = 2; i < N; i++) {
        for (int j = i + i; j < N; j += i) {
            isPrime[j] = false;
        }
    }
    vector<int> Primes;
    for (int i = 2; i < N; i++) {
        if (isPrime[i]) {
            Primes.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        if (k == 1) {
            if (a == b) {
                cout << "NO" << "\n";
            } else if (a % b == 0 or b % a == 0) {
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
            continue;
        }
        auto Count_Expo = [&](int n) {
            int res = 0;
            for (auto i : Primes) {
                while (n % i == 0) {
                    ++res;
                    n /= i;
                }
            }
            if (n != 1) {
                ++res;
            }
            return res;
        };
        cout << (k <= Count_Expo(a) + Count_Expo(b) ? "YES" : "NO") << "\n";
    }
    return 0;
}