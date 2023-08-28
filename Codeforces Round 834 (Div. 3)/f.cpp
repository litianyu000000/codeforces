#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
const int N=2e6+10,M=5050,INF=1e18,mod=998244353;
int n,h;
int a[N];
string s[N];
int get(int x)
{
    int xx=h;
    int sum=0;
    int now=0;
    for(int i=1;i<=n;)
    {
        if(a[i]<xx)
        {
            xx+=a[i]/2;
            sum++;
            i++;
            continue;
        }
        if(now==3) break;
        xx*=s[x][now]-'0';
        now++;
    }
    return sum;
}
signed main(){
    int T;
    //T=1;
    cin>>T;
    s[1]="223";
    s[2]="322";
    s[3]="232";
    while(T--)
    {   
        cin>>n>>h;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int maxn=-1;
        for(int i=1;i<=3;i++)
        {
            maxn=max(maxn,get(i));
        }
        cout<<maxn<<"\n";
    }
    return 0;
} 
  