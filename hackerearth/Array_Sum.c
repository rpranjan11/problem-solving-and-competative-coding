#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	long int sum=0,a[n];
	for(int i=0;i<n;i++){
	    scanf("%ld", &a[i]);
	    sum=sum+a[i];
	}
	printf("%ld", sum);
}