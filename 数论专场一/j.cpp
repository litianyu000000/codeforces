#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
const int INF=0x3f3f3f3f;
#define mem(x,y) memset(x,y,sizeof(x))
#define SI(x) scanf("%d",&x)
#define PI(x) printf("%d",x)
#define SD(x) scanf("%lf",&x)
#define P_ printf(" ")
typedef __int64 LL;
LL gcd(LL a,LL b){
    return b==0?a:gcd(b,a%b);
}

//找有几个2520
int main(){
        LL n;
        while(~scanf("%I64d",&n)){
            LL lcm=1;
            for(LL i=1;i<=10;i++){
                lcm=lcm/gcd(lcm,i)*i;
            }
            printf("%I64d\n",n/lcm);
        }
    return 0;
}