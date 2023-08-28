#include<bits/stdc++.h>

using namespace std;

#define int long long
#define lowbit(x) (x)&(-x)
typedef pair<int,int> pii;
typedef unsigned long long ull;
const int inf=0x3f3f3f3f3f3f3f3f;
const int mod=1e9+7;
const int maxn=200100;

int a[maxn];
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int T;cin>>T;
    while(T--){
        int a1,a2,a3,a4;cin>>a1>>a2>>a3>>a4;
        if(a1)
        cout<<a1+2*min(a2,a3)+min(a1+1,abs(a2-a3)+a4)<<'\n';
        else
        cout<<1<<'\n';

    }

    return 0;
}