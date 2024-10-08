// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/hunny-bunny-eebee22a/

#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    long int n;
	    scanf("%ld",&n);
	    long long int a[n];
	    int c=0;
	    unsigned long long int sum=0;
	    for(long int i=0;i<n;i++){
	        scanf("%lld",&a[i]);
	        if(a[i]>0)
	            sum+=a[i];
	    }
	    if(sum==0)
	        c++;
	    while(sum>1){
	        if(sum%2==1){
	            c++;
	            break;
	        }
	        sum=sum/2;
	    }
	    if(c)
	        printf("No\n");
	    else
	        printf("Yes\n");
	}
}