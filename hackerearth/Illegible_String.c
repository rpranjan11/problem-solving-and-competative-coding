#include<stdio.h>

int main() {
    int n,max,min=0,last=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    max=n;
    for(int i=0;i<n;i++) {
        if(s[i]=='w') {
            max++;
            last+=2;
        }
        if(s[i]=='v')
            last+=1;
        if((s[i]!='w')&&(s[i]!='v')) {
            min++;
            min+=last-last/2;
            last=0;
        }
        if(i==(n-1))
            min+=last-last/2;
    }
    printf("%d %d",min,max);
}