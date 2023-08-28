#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve()
{
    string s;cin >> s;s = '0' + s;
    int n = s.size(),lst = n - 1;
    for(int i = n - 1;i  >= 0;i -- ){
        if(s[i] >= '5'){
            for(int j = i;j <= lst;j ++ )
                s[j] = '0';
            lst = i - 1;
            if(s[i - 1] != '9') s[i - 1] ++;
            else{
                while(s[i - 1] != '9') s[i - 1] = '0',i --;
                s[i - 1] ++;
            }
        }
    }
    if(s[0] != '0') cout << s << '\n';
    else cout << s.substr(1) << '\n';
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}

