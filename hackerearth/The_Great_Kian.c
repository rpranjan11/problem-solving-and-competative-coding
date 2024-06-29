#include <stdio.h>

int main(){
	long int n,s,j;
	scanf("%ld", &n);
	long int a[n];
	for(long int i=0;i<n;i++)
	   scanf("%ld",&a[i]);
	for(int i=0;i<3;i++){
	   j=i;
	   s=0;
	   while(1){
	   if(j>n-1)
	     break;
	   s=s+a[j];
	   j+=3;
	   }
	   printf("%ld ",s);
	}
}