#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>
#include <vector> 
#include <queue>

using namespace std;
const int N = 2e5 + 10;
typedef pair<int, int > PII;
priority_queue<PII> q;
string s;
int n, p;
vector<PII> v;

void solve()
{
    cin >> s >> p;
    v.clear();
    int sum = 0;
    while(q.size()) q.pop();
    for(int i = 0 ; s[i] ; i ++ )
    {
        q.push({s[i] - 'a' + 1 , i});
        sum += s[i] - 'a' + 1;
    }
    while(sum > p)
    {
        auto t = q.top();
        q.pop();
        sum -= t.first;
    }
    while(q.size()) 
    {
        auto t = q.top();
        q.pop();
        v.push_back({t.second, t.first});
    }
    sort(v.begin(), v.end());
    for(auto it : v) cout << (char)(it.second + 'a' - 1) ;
    cout << endl;

}

signed main()
{
    int T;
    cin >> T;
    while(T -- ) solve();
    return 0;
}