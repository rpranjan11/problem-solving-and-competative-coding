#include<stdio.h>

int main() {
    int k,i,j,ans=0;
    scanf("%d",&k);
    char s[100000];
    scanf("%s",&s);
    int l=strlen(s);
    for(i=0;i<l;i++) {
        int h[26]={0};
        int count=0;
        for(j=i;j<l;j++) {
            if(h[s[j]-'a']==0)
                count++;
            if(count==k)
                ans++;
            h[s[j]-'a']=1;
        }
    }
    printf("%d",ans);
}