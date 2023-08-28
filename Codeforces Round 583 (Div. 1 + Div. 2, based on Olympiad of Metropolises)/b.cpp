//直接算出boy最多多少个，girl最多多少个，然后算出共存的可能即可

//KX
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const int M = 1e5+7;
#define ls o*2
#define rs o*2+1
#define pb push_back
int main()
{
    ll b,g,n;
    cin>>b>>g>>n;
    ll nb=min(n,b),ng=min(n,g);
    int cnt=0;
    for(int i=0;i<=nb;i++)
    {
        if(n-i<=ng)cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
