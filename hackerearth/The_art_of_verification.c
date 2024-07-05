#include<stdio.h>
#include<string.h>

int main() {
    char s[1000];
    scanf("%s",s);
    int l=strlen(s);
    for(int i=40;i<l;i++) {
        if(s[i]=='&'&&(s[i+1]=='p'||s[i+1]=='r'||s[i+1]=='k'))  {
            printf("\n");
            i++;
        }
        if(s[i]=='='&&(s[i-1]=='e'||s[i-1]=='d'||s[i-1]=='y'))  {
            printf(": ");
            i++;
        }
        printf("%c",s[i]);
    }
        return 0;
    }