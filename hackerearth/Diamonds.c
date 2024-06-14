#include<stdio.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--) {
        int a,b,f=0;
        scanf("%d %d",&a,&b);
        char str[a][b];
        for(int i=0;i<a;i++) {
            for(int j=0;j<b;j++) {
                scanf(" %c ",&str[i][j]);
            }
            scanf("\n");

        }
        int cnt=0;
        for(int i=0;i<a-1;i++) {
            for(int j=0;j<b-1;j++) {
                if(str[i][j]=='/' && str[i][j+1]=='\\') {
                    if(str[i+1][j]=='\\' && str[i+1][j+1]=='/')
                        cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
}