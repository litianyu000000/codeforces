/*对于1维上的点，我们只需将x排序，相邻的成对输出即可

对于2维上的点，我们将它们根据y相等进行分类，这样是一个y内有一堆的x，我们对于每个y，将x数组像解决一维上的成对输出即可，如果总个数为奇数，则将这个存起来与下个y剩下的一起输出。

对于3维上的点，我们将他们根据z进行分类，这样每个z都是个二维的信息了，我们按照2维那样输出点对即可，如果剩下一下，就留着与下个z的剩下的输出。
*/
#include<bits/stdc++.h>
#define mset(a,b) memset(a,b,sizeof(a))
using namespace std;
typedef long long ll;
const int inf=0x3f3f3f3f;
const int N=5e4+5;
int p[N][3];
int n;
int solve(vector<int> ps,int k)//0~2
{
    //从解决第k维度开始的问题,
    if(k==3)
        return ps[0];
    map<int,vector<int> > oo;
    for(int &v:ps){
        oo[p[v][k]].push_back(v);
    }
    vector<int> a;
    for(auto& p :oo)
    {
        int cur=solve(p.second,k+1);
        if(cur!=-1)
            a.push_back(cur);
    }
    for(int i=0;i+1<a.size();i+=2)
        printf("%d %d\n",a[i],a[i+1]);
    if(a.size()%2!=0) return a.back();
    else return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n; ++i)
        for(int j=0; j<3; ++j)
            scanf("%d",&p[i][j]);
    vector<int> ps(n);
    iota(ps.begin(),ps.end(),1);//1 2 3 4 5........
    solve(ps,0);
    return 0;
}





/*解析: 直接想三维平面的两个点删掉的策略可能不太好想，我们可以试着先从低维分析:
(1)如果是一维，如果事先把这些点排个序，直接按顺序把挨得近的两两删掉即可；
(2)如果是二维的话，如果我们事先将这些点以x为第一优先、y为第二优先的顺序排个序，我们也按照顺序将相邻的两个点两两删去也是可以的。
(3)所以在三维条件下，我们可以先事先把所有点从小到大排个序，先按x再按y再按z，然后先把一维的点都删掉，这里我们可以约定删xy相同的点，如果删完这些点还有剩余，我们就把x相同的点两两删掉，如果还有剩余就按顺序删掉这些点就行了。
*/
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;
typedef pair<int,int> P;
const int maxn=5e4+7;
const int inf=0x3f3f3f3f;
const ll mod=1e9+7;
#define pb push_back
#define faster ios::sync_with_stdio(0),cin.tie(0)
int n;
struct node{
    int x,y,z,id;
}no[maxn];
bool cmp(node a,node b){
    if(a.x!=b.x)return a.x<b.x;
    if(a.y!=b.y)return a.y<b.y;
    return a.z<b.z;
}
vector<node> v;
vector<node> g;
void solve(){
    for(int i=0;i<n;i++){//先删一维的点对
        if(no[i].x==no[i+1].x){
            if(no[i].y==no[i+1].y){
                while(no[i].y==no[i+1].y){
                    printf("%d %d\n",no[i].id,no[i+1].id);
                    i+=2;
                }
                i--;
            }
            else v.pb(no[i]);
        }
        else v.pb(no[i]);
    }
    for(int i=0;i<(int)v.size();i++){//删二维点对
        if(v[i].x==v[i+1].x){
            printf("%d %d\n",v[i].id,v[i+1].id);
            i++;
        }
        else g.pb(v[i]);
    }
    for(int i=0;i<(int)g.size();i+=2){//删二维点对
        printf("%d %d\n",g[i].id,g[i+1].id);
    }
}
int main()
{
    faster;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>no[i].x>>no[i].y>>no[i].z;
        no[i].id=i+1;
    }
    sort(no,no+n,cmp);
    no[n].x=no[n].y=no[n].z=inf;
    solve();
    return 0;
}
