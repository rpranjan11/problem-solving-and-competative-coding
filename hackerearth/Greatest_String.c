// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/greatest-string-fcf3e37c/

#include <string.h>
#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t); 
	while(t--){
	    char s[100000];
	    scanf("%s",s);
	    int q;
	    scanf("%d",&q);
	    if(q==0)
	        printf("%s",s);
	    else{
	        //int len=strlen(s);
	        for(int i=0;s[i]!='\0';i++){
	            if(q && (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') ) {
	                int temp=s[i];
	                printf("%c",++temp);
	                q--;
	            }
	            else
	                printf("%c",s[i]);
	        }
	    }
	    printf("\n");
	}
}