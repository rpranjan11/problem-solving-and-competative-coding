#include <stdio.h>
#include <string.h>
int isPalindrome(char str[]){
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l){
        if (str[l++] != str[h--])
            return 0;
    }
    return 1;
}
int main(){
    int t,check;
    long int sum;
    char s[10]={'\0'};
    scanf("%d",&t);
    while(t--){
        sum=1;
        scanf("%s",s);
        check=isPalindrome(s);
        if(check)
            printf("Palindrome\n");
        else{
            for(int i=0;s[i]!='\0';i++)
                sum*=s[i]-96;
            printf("%ld\n",sum);
        }
    }
}