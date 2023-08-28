/*经过打表后可以发现，f(x,y)=(x|y)-y=x&(~y)，可以写成这种形式。
那么我们就去求x1&(~x2)&( ~x3)&…&( ~xn)最大的最优排列顺序。
如果有一位上仅有一个数字是1，而其他的数字在这一位上全都是0，
那么将为1的那个数字排列在第一位，那么最后的结果这一位一定为1
（剩下的数字在取反后这一位也是1）。
我们位数由大到小来找这样的数字，那么只要找到一个这样的数字，
将这一个数字安排在第一位，剩下的随便放就可以了。*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxx=1e5+100;
int a[maxx];
int n;

inline int fcs()
{
    for(int i=30;i>=0;i--)
    {
        int cnt=0;int pos;
        for(int j=1;j<=n;j++)
        {
            if((a[j]&(1<<i))) cnt++,pos=j;
        }
        if(cnt==1) return pos;//找到这样的一种数字
    }
    return 0;
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int pos=fcs();
    if(pos==0) for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    else
    {
        cout<<a[pos]<<" ";
        for(int i=1;i<=n;i++)
        {
            if(i!=pos) cout<<a[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}


/*前后缀
所以最终结果为最终序列的第一个数和其他所有数的取反后的 & 值，
并且其他数的位置不重要。可以预处理出前缀和后缀，然后枚举第一个数即可，
确定最大值对应的数。
*/
/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;
ll a[N],pre[N],suf[N];
int main()
{
    int n,p,cnt=0;
    ll maxn=-1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        if(i==1)//注意
            pre[1]=~a[i];
        else
            pre[i]=pre[i-1]&(~a[i]);
    }
    for(int i=n;i>=1;i--)
    {
        if(i==n)
            suf[i]=~a[i];
        else
            suf[i]=suf[i+1]&(~a[i]);
    }
    for(int i=1;i<=n;i++)
    {
        ll res;
        if(i==1)
            res=a[i]&suf[i+1];
        else if(i==n)
            res=a[i]&pre[i-1];
        else
            res=(a[i]&pre[i-1]&suf[i+1]);
        if(res>maxn)
        {
            maxn=res;
            p=i;
        }
    }
    printf("%lld%c",a[p],n==1?'\n':' ');
    for(int i=1;i<=n;i++)
    {
        if(i!=p)
        {
            cnt++;
            printf("%lld%c",a[i],cnt==n-1?'\n':' ');
        }
    }
    return 0;
}

*/

