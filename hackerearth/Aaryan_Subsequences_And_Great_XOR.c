#include <stdio.h>

int main(){
	long int n,m;
	scanf("%ld", &n);
	m=2^n;
	long long int a[n],x[m],ans=0;
	for(long int i=0;i<n;i++){
	    scanf("%lld",&a[i]);
	    ans=ans|a[i];
	}
	/*long int k=0;
	for(long int i=0;i<n-1;i++){
	    for(long int j=i+1;j<n;j++){
	        x[k]=a[i]^a[j];
	        //printf("%lld ",x[k]);
	        k++;
	    }
	}

	ans=x[0];
	for(long int i=1;i<m;i++)
	    ans=ans|x[i];*/
	printf("%lld",ans);
}