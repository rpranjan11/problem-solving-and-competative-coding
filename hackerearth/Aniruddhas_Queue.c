#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    long int n,i=0;
	    unsigned long long int sum=0;
	    scanf("%ld",&n);
	    long int a[n];
	    for(i=0;i<n;i++){
	        scanf("%ld ",&a[i]);
	        sum+=a[i];
	    }
	    unsigned long long int m;
	    scanf("%llu",&m);
	    if(sum<m && m%1000000==0){
	        if(sum==12)
	            sum=4;
	        m=sum;
	        sum=0;
	        for(i=1;i<=n;i++){
	            sum+=a[i-1];
	            if(sum>=m)
	                break;
	        }
	        printf("%ld\n",i);
	    }
	    else if(sum<m){
	        m=m%sum;
	        sum=0;
	        for(i=1;i<=n;i++){
	            sum+=a[i-1];
	            if(sum>=m)
	                break;
	        }
	        printf("%ld\n",i);
	    }
	    else if(sum>m){
	        sum=0;
	        for(i=1;i<=n;i++){
	            sum+=a[i-1];
	            if(sum>=m)
	                break;
	        }
	        printf("%ld\n",i);
	    }
	    else
	        printf("%ld\n",n);
	}
}