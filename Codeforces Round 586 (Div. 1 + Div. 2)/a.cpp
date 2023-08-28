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
    int n;cin>>n;
    map<char,int>mp;
    string s;cin>>s;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int c1=0,c0=0;
    while(mp['o']&&mp['n']&&mp['e']){
        c1++;
        mp['o']--;mp['n']--;mp['e']--;
    }
    while(mp['z']&&mp['r']&&mp['e']&&mp['o']){
        c0++;
        mp['o']--;mp['r']--;mp['e']--,mp['z']--;
    }
    for(int i=0;i<c1;i++)
        cout<<1<<' ';
    for(int i=0;i<c0;i++)
        cout<<0<<' ';
    cout<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}

