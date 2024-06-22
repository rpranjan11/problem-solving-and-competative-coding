#include <stdio.h>

int main(){
    int n;
	long int code=0,ctr=0,a=0;
	 char s[1441];
	scanf("%d", &n);
	while(n--){
	    scanf("%s",s);
	    long int c=0;
	    for(long int i=0;s[i]!='\0';i++){
	        if(s[i]==67) {ctr++; c++;}
	        else{
	            if(ctr>code) code=ctr;
	            if(c>a) a=c;
	            ctr=0; c=0;
	        }
	    }
	    if(c>a) a=c;
	    if(ctr>code) code=ctr;
	}
	printf("%ld %ld",a,code);
}