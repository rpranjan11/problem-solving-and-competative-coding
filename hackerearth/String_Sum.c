#include <stdio.h>

int main(){
	int sum=0;;
	    char s[1000];
	    scanf("%s",s);
	    for(int j=0;s[j]!='\0';j++)
	        sum=sum+(s[j]-96);
	    printf("%d",sum);
}