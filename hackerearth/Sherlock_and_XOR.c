#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    long int n,c=0;;
	    scanf("%ld",&n);
	    long long int a[n],odd=0,even=0;
	    for(long int i=0;i<n;i++){
	        scanf("%lld",&a[i]);
	        if(a[i]%2==0)
	            even++;
	        else
	            odd++;
	    }

	    /*for(long int i=0;i<n;i++){
	        for(long int j=i+1;j<n;j++){
	            if((( a[i]^a[j]) %2 ) !=0 )
	                c++;
	        }
	    }*/
	    printf("%ld\n",odd*even);
	}
}