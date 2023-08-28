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
  int n;
  ll t;
  while (scanf("%d%lld", &n, &t) != EOF)
  {
    double ans = mod_quick(jin, t);
    printf("%lf\n", n * ans);
  }
  return 0;
}