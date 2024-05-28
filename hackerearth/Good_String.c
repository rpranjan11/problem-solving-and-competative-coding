#include <stdio.h>

int main(){
	int n,a,count[26]={0},c;
	char s[100000];
	scanf("%s", s);
	for(long int i=0;s[i]!='\0';i++){
	    a=s[i];
	    count[a-97]++;
	    if(count[a-97]>1)
	      c++;
	}
	printf("%d",c);
}