#include <stdio.h>

int main(){
	long int n;
	scanf("%ld", &n);
	unsigned long long int sum=0,sum1=0,r1,r2;
	long int a[n],b[n];
	for(long int i=0;i<n;i++){
	    scanf("%ld",&a[i]);
	    sum+=a[i];
	}
	for(long int i=0;i<n;i++){
	    scanf("%ld",&b[i]);
	    sum1+=b[i];
	}
	r1=sum-n;
	r2=sum1-n;
	if(r1>r2)
	    printf("1 %llu",r1-r2);
	else
	    printf("2 %llu",r2-r1);
return 0;
}