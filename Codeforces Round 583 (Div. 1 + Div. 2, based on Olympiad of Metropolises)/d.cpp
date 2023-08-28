//跑两遍dfs，因为题目要求只能往右或者往下走，所以不要返回，
//直接一直边走边标记，第一遍跑完，如果到不了的话，那么就为0；
//否则跑第二遍，如果第二遍到不了，就为1，否则就为2，因为只有0，1，2这三种情况。
//KX
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const int M = 1e6+7;
#define ls o*2
#define rs o*2+1
#define pb push_back
vector<char>p[M];
vector<int>z[3];
char s[M];
int n,m;
bool to;
void dfs(int x,int y)
{
    if(to)return;
    if(x==n-1&&y==m-1)
    {
        to=true;
        return ;
    }
    if(x>=n||y>=m||x<0||y<0)return ;
    if(p[x][y]=='#')return ;
    if(!(x==0&y==0))
    {
        p[x][y]='#';
        cout<<x<<' '<<y<<endl;
    }
    dfs(x,y+1);//能y+1就y+1走返回true，走不了再x+1;
    dfs(x+1,y);
}
int mp[M];
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        scanf("%s",s+1);
        int len=strlen(s+1);
        for(int j=1;j<=len;j++)
        {
            p[i].pb(s[j]);
        }
    }
    dfs(0,0);
    if(!to){
        puts("0");
        return 0;
    }
    to=false;
    dfs(0,0);
    if(!to){
        puts("1");
        return 0;
    }
    else
        puts("2");
    return 0;
}