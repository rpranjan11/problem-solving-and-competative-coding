#include<stdio.h>
void main(){
    char s[100],s1[100];
    int i=0;
    scanf("%s",s);
    while(s[i]!='\0')
        i++;
        i--;
        //printf("%d",i);
    for(int j=0;i>=0;i--,j++)
       s1[j]=s[i];
    //puts(s1);

    for(i=0;s[i]!='\0';i++){
       if(s1[i]!=s[i]){
         printf("NO");
         break;
       }
       else{
         printf("YES");
         break;
       }
    }

}