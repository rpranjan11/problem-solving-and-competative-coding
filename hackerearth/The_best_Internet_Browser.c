#include <stdio.h>

int vowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    	return 0;
    }
int main() {
    int T,i,jb,nb;
    char s[200];
    scanf("%d",&T);
    while(T--) {
    	scanf("%s",s);
    	i=4;
    	jb=4;
    	nb=8;
    	while(s[i] != '.') {
    		if(!vowel(s[i])) {
    			jb++;
    		}
    		nb++;
    		i++;
    	}
    	printf("%d/%d\n",jb,nb);
    }
}