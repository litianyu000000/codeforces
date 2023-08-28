/*记录三条线段：
x1:左端点最小且价值最小的线段
x2:右端点最大且价值最小的线段
x3:长度最长且价值最小的段
记录所得数字的最大区间 [ l , r ] [l, r][l,r]
*/
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define int long long
void solve()
{
    int n;cin>>n;
    int l,r,c;
    int maxL=2e9,maxR=0;
    int costL,costR;
    int maxlen=0,costlen=0;
    for(int i=1;i<=n;i++)
    {
        cin>>l>>r>>c;
        if(maxL>l)maxL=l,costL=c;
        if(maxL==l)costL=min(costL,c);

        if(maxR<r)maxR=r,costR=c;
        if(maxR==r)costR=min(costR,c);

        if(maxlen<r-l+1)maxlen=r-l+1,costlen=c;
        if(maxlen==r-l+1)costlen=min(costlen,c);
        int res=costL+costR;
        if(maxlen==maxR-maxL+1)res=min(res,costlen);
        cout<<res<<'\n';
    }
}

signed main()
{
    int T;cin>>T;
    while(T--)solve();
}
