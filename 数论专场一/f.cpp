#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll C(ll n,ll m)
{
    if(m>n-m)
    {
        m=n-m;
    }
    ll ans=1;
    for(ll i=1;i<=m;++i)
    {
      ans=ans*(n-i+1)/i;
  }
    return ans;
}
int main()
{
    ll n;cin>>n;
    cout<<C(n,5)+C(n,6)+C(n,7)<<endl;
    return 0;
}