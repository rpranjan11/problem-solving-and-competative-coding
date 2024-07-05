#include <stdio.h>

int main(){
	int t,n,count=0,count1=0;
	scanf("%d",&t);
	while(t--){
	    count=0;count1=0;
	    scanf("%d",&n);
	    long int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%ld",&a[i]);
	        if(a[i-1]==a[i])
	            count++;
	    }

	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if( ( a[i] + a[j] ) % 2 == 0  && a[i]!=a[j])
	                count1++;
	        }
	    }

	    if(count==n-1)
	        printf("0\n");
	    else
	        printf("%d\n",count1);
	}
}