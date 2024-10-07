// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/greatest-string-fcf3e37c/

#include <string.h>
#include <stdio.h>

int main() {
	int testcase;
	scanf("%d", &testcase); 
	while(testcase--) {
	    char str[100000];
	    scanf("%s", str);
	    int q;
	    scanf("%d", &q);
	    if(q==0)
	        printf("%s", str);
	    else {
	        for(int i=0; str[i]!='\0'; i++) {
	            if(q && (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u') ) {
	                int temp = str[i];
	                printf("%c",++temp);
	                q--;
	            }
	            else
	                printf("%c",str[i]);
	        }
	    }
	    printf("\n");
	}
}