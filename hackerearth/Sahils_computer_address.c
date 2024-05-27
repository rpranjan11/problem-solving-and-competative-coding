#include<stdio.h>
int main() {
    char s[64];
    scanf("%s",s);
    int l=strlen(s);
    int i=0;
    int count1=0,count2=0;
    if(l==7)
        printf("YES");
    else{
        while(s[i]!='\0') {
            int sum=0,x=3;
            while(x--) {
                sum=10*sum+s[i]-48;
                i++;
            }
            if(sum<=255&&sum>=0)
                count1++;
            else
                break;
            if(s[i]=='.'){
                count2++;
                i++;

            }
            else
                break;
        }
        if((s[i]=='\0')&&(count1==4)&&(count2==3))
            printf("YES");
        else
            printf("NO");
    }
}