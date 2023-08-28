#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;

void solve(){
    int n,m;cin>>n>>m;
    int cnt2=0,cnt5=0;
    int ans=1;
    int x=n;
    while(x%2==0){
        x/=2;
        cnt2++;
    }
    while(x%5==0){
        x/=5;cnt5++;
    }
    if(cnt2<cnt5){
        while(ans*2<m&&cnt2<cnt5){
            ans*=2;cnt2++;
        }
    }else if(cnt2>cnt5){
        while(ans*5<m&&cnt2>cnt5){
            cnt5++;ans*=5;
        }
    }
    while(ans*10<m){
        ans*=10;
    }
    ans=(m/ans)*ans;
    cout<<ans*n<<endl;
}

signed main()
{
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
  