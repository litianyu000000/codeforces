
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+100000;
typedef long long ll;
ll res[N],cnt[N][26];
char s[N];
ll ans=0;
int main()
{
    cin>>s;
    int n=strlen(s);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<26;j++)
        {
            cnt[s[i]-'a'][j]+=res[j];//记录长度为2的
            ans=max(ans,cnt[s[i]-'a'][j]);
        }
        res[s[i]-'a']++; //记录长度为1的
        ans=max(ans,res[s[i]-'a']);
    }
    cout<<ans<<endl;
}

