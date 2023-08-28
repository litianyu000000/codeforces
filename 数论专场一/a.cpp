#include<stdio.h>
#include<string.h>
int main() {
    char s[100];
    while(scanf("%s",s)!=EOF) {
        if(strcmp(s,"1")==0)
            printf("5\n");
        else
            printf("25\n");
    }
    return 0;
}