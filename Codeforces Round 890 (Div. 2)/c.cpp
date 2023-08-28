#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
#define endl '\n'
#define pq priority_queue
using namespace std;
typedef pair<int,int> pii;
/*可以发现假设a[i]变成最大值x,那么后面一定是连续的x-1,x-2,…………这样,
直到某个数不需要操作也能达到要求.
考虑二分答案.然后枚举最终最大值的位置i,这样这个位置和后面的位置需要变成的值就确定了,
模拟一下就能得到是否可行了.*/

int n,k;

bool check(int x,vector<int>a)
{
    for(int i=0;i<n;i++){
        int mai=k;
        for(int j=i,v=x;j<n;j++,v--){
            if(a[j]>=v)
                return true;
            if(mai<v-a[j])break;
            mai-=v-a[j];
        }
    }
    return false;
}

void solve()
{
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=*max_element(a.begin(),a.end());
    int r=1e9;
    while(l+1!=r){
        int mid=l+r>>1;
        if(check(mid,a))
            l=mid;
        else
            r=mid;
    }
    cout<<l<<endl;
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

