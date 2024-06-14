#include <stdio.h>

int main(){
	int n;
	long int c=0;
	scanf("%d", &n);
	char s[1000000];
	for(int i=0;i<n;i++){
	    scanf("%s",s);
	    c=0;
	    for(long int j=0;s[j]!='\0';j++)
	       c++;
	    //printf("%ld\n",c);
	    char revs[c];
	    //puts(revs);
	    for(long int j=0;s[j]!='\0';j++,c--)
	        revs[c-1]=s[j];
	        //puts(revs);
	    for(long int j=0;s[j]!='\0';j++){
	        int a=s[j]-96;
	        int b=revs[j]-96;
	        //printf("%d %d ",a,b);
	        int d=a+b;
	        if(d>26)
	           d=d%26;
	        if(d==0)
	           d=26;

	        printf("%c",d+96);
	    }
	    printf("\n");
	}
}