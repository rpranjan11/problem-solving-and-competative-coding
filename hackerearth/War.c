/*
#include <stdio.h>

int main(){
	int t;
	long int n;
	scanf("%d", &t);
	while(t--){
	    scanf("%ld",&n);
	    long int b[n],a[n];
	    unsigned long long int bsum=0,asum=0;
	    for(long int i=0;i<n;i++){
	        scanf("%ld",&b[i]);
	        bsum+=b[i];
	    }
	    for(long int i=0;i<n;i++){
	        scanf("%ld",&a[i]);
	        asum+=a[i];
	    }
	    if(bsum>asum)
	        printf("Bob\n");
	    else if(asum>bsum)
	        printf("Alice\n");
	    else
	        printf("Tie\n");
	}
}
*/

#include <stdio.h>

int main(){
	int t;
	long int n,actr,bctr;
	scanf("%d", &t);
	while(t--){
	    scanf("%ld",&n);
	    long int b[n],a[n];
	    for(long int i=0;i<n;i++)
	        scanf("%ld",&b[i]);

	    for(long int i=0;i<n;i++)
	        scanf("%ld",&a[i]);

	    actr=a[0];
	    bctr=b[0];
	    for(long int i=1;i<n;i++){
	        if(a[i]>actr)
	            actr=a[i];
	        if(b[i]>bctr)
	            bctr=b[i];
	    }
	    if(bctr>actr)
	        printf("Bob\n");
	    else if(actr>bctr)
	        printf("Alice\n");
	    else
	        printf("Tie\n");
	}
}