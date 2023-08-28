#include<bits/stdc++.h>

using namespace std;

#define int long long
#define lowbit(x) (x)&(-x)
typedef pair<int,int> pii;
typedef unsigned long long ull;
const int inf=0x3f3f3f3f3f3f3f3f;
const int mod=1e9+7;
const int maxn=200100;

/*思路：
举例：对于一个排列n=6，显然我们可以通过选择(3,4)(2,5)(1,6)使其变得有序，
那么假如2,3,4,5已经有序的话，那我们就只需选择(1,6)即可。
于是我们可以维护当前有序部分最小元素的坐标l，最大元素坐标r，
枚举点对(i,n-i+1)，如果i的位置小于n-i+1的位置并且i的位置在l左边，
n-i+1的位置在r右边，即是合法，更新l与r,就可以得到最大的有序部分。*/

int a[maxn],hs[maxn];
void solve(){


    int n;cin>>n;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        hs[a[i]]=i;
    }
    int l=inf,r=0;
    if(n&1)l=r=hs[n/2+1];
    for(int i=n/2;i>=1;--i){
        if(hs[i]<hs[n-i+1]&&hs[i]<l&&hs[n-i+1]>r){
            l=hs[i];r=hs[n-i+1];
        }
        else{
            cout<<i<<'\n';
            return ;
        }
    }
    cout<<0<<'\n';
}
signed main(){
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int T;cin>>T;
    while(T--){
        solve();
    }

    return 0;
}