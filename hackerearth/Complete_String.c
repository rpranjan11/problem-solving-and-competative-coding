#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--) {
	    char s[101];
	    scanf("%s",s);
	    int a[26]={0},c=0;
	    for(int i=0;s[i]!='\0';i++)
	        a[s[i]-97]++;
	    for(int i=0;i<26;i++) {
	        //printf("%d ",a)
	        if(a[i]==0){
	            c++;
	            break;
	        }
	    }
	    if(c)
	        printf("NO\n");
	    else
	        printf("YES\n");
	}
}