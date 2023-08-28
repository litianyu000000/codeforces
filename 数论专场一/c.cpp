#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define jin 1.000000011
double mod_quick(double a, ll b)
{
  double ans = 1;
  while (b)
  {
    if (b & 1)
      ans *= a;
    a *= a;
    b >>= 1;
  }
  return ans;
}
int main()
{
  int n;cin>>n;
  ll ans=1,s=0;
  for(int i=1;i<=n;i++)
  {
    ans*=2;s+=ans;
  }
  cout<<s<<endl;
  return 0;
}