#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[10001],b[10001];
	    scanf("%s %s",a,b);
	    if(!strcmp(a, b))
	        printf("YES\n");
	    else
	    printf("NO\n");
	}
}