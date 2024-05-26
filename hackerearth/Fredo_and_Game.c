#include <stdio.h>

int main(){
	int t;
	long int c,n,j;
	scanf("%d", &t);
	while(t){
	    scanf("%ld %ld",&c,&n);
	    long int a[n];
	    for(long int i=0;i<n;i++)
	       scanf("%ld",&a[i]);

	       for(j=0;j<n;j++){
	           if(c==0)
	               break;
	           else if(a[j]==1) { c+=2; }
	           else { c--; }
	       }
	   if(c==0 && j==n)
	        printf("Yes %ld\n",c);
	   else if(c==0)
	        printf("No %ld\n",j);
	   else
	        printf("Yes %ld\n",c);
	    t--;
	}
}