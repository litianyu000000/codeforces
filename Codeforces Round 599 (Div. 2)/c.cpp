#include<bits/stdc++.h>
using namespace std;
const int maxn =1005;
/*从第一个字符开始，如果Si==Ti就跳到下一个字符，如果不相等就在S和T中找到与Ti相同的位置，找不到就说明根本不可能换成两个字符串相等，直接输出NO。
找到后，若这个字符串在T上则直接与Si交换，若这个字符串在S上，则在该位置先进行Sj与Tj的交换，换完之后再将Tj与Si交换，这样就能做到Si与Sj的交换了。换到倒数第二个字符结束。若前面n-1个字符换完之后最后一个位置处的字符不相等说明根本不可能换成两个字符相等，如果这两个字符相等就说明可以换成。
*/
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        queue<pair<int,int> >q;
        cin>>n;
        string s,t;
        cin>>s>>t;
        bool flag2=true;
        for(int i=0;i<n;i++){
            if(s[i]==t[i])continue;
            bool flag=false;
            for(int j=i+1;j<n;j++)
                if(s[j]==t[i]){
                    q.push(make_pair(j,j));
                    q.push(make_pair(i,j));
                    s[j]=t[j];t[j]=s[i];s[i]=t[i];
                    flag=true;
                    break;
                }
            if(flag)continue;
            for(int j=i+1;j<n;j++)
                if(t[j]==t[i]){
                    q.push(make_pair(i,j));
                    t[j]=s[i];
                    s[i]=t[i];
                    flag=true;
                    break;
                }
            if(!flag){
                flag2=false;
                break;
            }
        }
        if(s[n-1]!=t[n-1]){
            flag2=false;
        }
        if(!flag2){cout<<"No"<<endl;continue;}
        cout<<"Yes"<<endl;
        cout<<q.size()<<endl;
        while(!q.empty()){
            cout<<q.front().first+1<<" "<<q.front().second+1<<endl;
            q.pop();
        }
    }
}