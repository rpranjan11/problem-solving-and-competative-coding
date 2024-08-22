#include <stdio.h>
#include<string.h>

int main() {
    int n,i,j,k,f,c=0;
	char b[101],a[101][101],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",a[i]);

    scanf("%d",&k);
    for(i=0;i<k;i++) {
        f=0;
        scanf("%s",b);
        for(j=0;j<n;j++) {
         	if(strcmp(b,a[j])==0) {
         	    f=1;
         		break;
         	}
        }
        if(f==0) {
         	m=b[0]-32;
         	if(c==0) {
         		printf("%c",m);
         		c++;
         	}
         	else
         		printf(".%c",m);
        }
    }
}