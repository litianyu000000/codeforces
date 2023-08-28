#include <bits/stdc++.h>

using namespace std;

char nl = '\n';
char sp = ' ';
using ll = long long;
using vb = vector<bool>;
using vi = vector<int>;
using vl = vector<ll>;
using vvb = vector<vb>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using si = unordered_set<int>;
using sl = unordered_set<ll>;
using tsi = set<int>;
using tsl = set<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;
using tmii = map<int, int>;
using tmll = map<ll, ll>;
using mii = unordered_map<int, int>;
using mll = unordered_map<ll, ll>;
using pqi = priority_queue<int>;
using pqig = priority_queue<int, vi, greater<int>>;
using pql = priority_queue<ll>;
using pqlg = priority_queue<ll, vl, greater<ll>>;
using pqpii = priority_queue<pii>;
using pqpll = priority_queue<pll>;

#define tp3(T) tuple<T,T,T>
#define tp4(T) tuple<T,T,T,T>

#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sort_and_unique(a) sort(all(a));(a).resize(unique(all(a))-(a).begin())
#define outrange(x,min,max) ((x)<(min) || (x)>(max))

ll _start_time;
#define nano (chrono::system_clock::now().time_since_epoch().count())
#define reset_timer _start_time=nano
#define chime cout<<((nano-_start_time)/1e9)<<endl
#define init_rng mt19937 rng(nano)
#define randint(a,b) ((a)+rng()%((b)-(a)+1))

#ifndef ONLINE_JUDGE
#define debug(x) (cout<<(#x)<<':'<<(x)<<'\n')
#else
#define debug(x)
#endif

void yesno(bool a) {
    cout << (a ? "Yes\n" : "No\n");
}

template<typename L, typename R>
ostream& operator<<(ostream& out, const pair<L, R>& p) {
    out << '(' << p.first << ',' << p.second << ')';
    return out;
}

template<typename T1, typename T2, typename T3>
ostream& operator<<(ostream& out, const tuple<T1, T2, T3>& tp) {
    auto &[t1, t2, t3] = tp;
    out << '(' << t1 << ',' << t2 << ',' << t3 << ')';
    return out;
}

template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
    for (auto &i : v) out << i << ' ';
    out << nl;
    return out;
}

template<typename T>
ostream& operator<<(ostream& out, const set<T>& v) {
    for (auto &i : v) out << i << ' ';
    out << nl;
    return out;
}

template<typename T>
ostream& operator<<(ostream& out, const unordered_set<T>& v) {
    for (auto &i : v) out << i << ' ';
    out << nl;
    return out;
}

template<typename K, typename V>
ostream& operator<<(ostream& out, const map<K, V>& m) {
    out << '[';
    for (auto &[k, v] : m) {
        out << k << ':' << v << sp;
    }
    out << "]\n";
    return out;
}

template<typename K, typename V>
ostream& operator<<(ostream& out, const unordered_map<K, V>& m) {
    out << '[';
    for (auto &[k, v] : m) {
        out << k << ':' << v << sp;
    }
    out << "]\n";
    return out;
}

const int MAX=200005;
int a[MAX];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int _t;
    cin>>_t;
    while(_t--){
        map<pii,ll> mp;
        ll ans=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            int b;
            cin>>b;
            int d=gcd(a[i],b);
            a[i]/=d;
            b/=d;
            mp[{a[i],b}]++;
        }

        for(auto [p,cnt]:mp){
            auto [a,b]=p;
            if(a<b) continue;
            if(a==b){
                ans+=cnt*(cnt-1)/2;
            }else{
                ans+=cnt*mp[{b,a}];
            }
        }

        cout<<ans<<nl;
    }
}