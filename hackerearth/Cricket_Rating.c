#include <stdio.h>

int main(){
	long int n,temp=0,sum=0;
	scanf("%ld", &n);
	int a[n];
	for(long int i=0;i<n;i++)
	    scanf("%ld",&a[i]);

	for(long int i=0;i<n;i++){
	    temp+=a[i];
	    if(temp<0)
	      temp=0;
	    if(sum<temp)
	      sum=temp;
	}
	//if(n>1)
	    printf("%d",sum);
	//else
	//    printf("%ld",a[0]);
}