/*对于一个字符串,在当前字符串后边加任何字符只会让字典序变大.
对于在当前字符串之前加上字符,开头的字符一定要比当前开头的字符小.
作为先手,如果在可以在当前字符之前有比当前字符小的,
那么就将左区间拓展到最左能够到达的位置,如果没有就是后手赢.*/
#include<bits/stdc++.h>
using namespace std;
using LL=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s;
    cin>>s;
    char mn='z';
    for(char c:s){
        if(mn<c){
            cout<<"Ann"<<endl;
        }else{
            cout<<"Mike"<<endl;
        }
        mn=min(mn,c);
    }
    return 0;
}