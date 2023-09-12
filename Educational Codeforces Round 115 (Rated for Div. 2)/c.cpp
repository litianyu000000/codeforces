#include <map>
#include <queue>
#include <stack>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 2e5+10,INF=0x3f3f3f3f;
typedef long long ll;

// 升序
//priority_queue <int,vector<int>,greater<int> > q;
// 降序
//priority_queue <int,vector<int>,less<int> >q;
ll a[N];
map<double ,int>mp;
int main()
{
   int t;
   scanf("%d",&t);

   while(t--)
   {
       mp.clear();
       ll n,sum=0,ans=0;
       double ave=0;
       scanf("%lld",&n);
       for(int i=1;i<=n;i++)
       {
           scanf("%lld",a+i);
           sum+=a[i];
           mp[a[i]]++;
       }

       ave=(double)sum/n;

       for(int i=1;i<=n;i++)
       {
           if(a[i]==ave)
               ans+=mp[a[i]]-1;
           else
           {
               ans+=mp[ave * 2 -a[i]];
           }
           mp[a[i]]--;
       }
       printf("%lld\n",ans);
   }
}
