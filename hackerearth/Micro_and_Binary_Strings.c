#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    long int n,c=0;
	    scanf("%ld",&n);
	    char s[n];
	    scanf("%s",s);
	    for(long int i=0;s[i]!=0;i++){
	        if(s[i]==49)
	            c++;
	    }
	    printf("%ld\n",c);
	}
}