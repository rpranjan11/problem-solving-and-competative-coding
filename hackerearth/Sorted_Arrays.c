/*
#include <stdio.h>

int main(){
	long int n,i,min,ctr=0;
	scanf("%ld", &n);
	long int a[n];
	for(i=0;i<n;i++)
	    scanf("%ld",&a[i]);
	    min=a[0];
	for(i=1;i<n;){
	    if(min>=a[i]){
	        a[i]++;
	        ctr++;
	    }
	    else{
	        min=a[i];
	        i++;
	    }
	}
	printf("%ld",ctr);
}*/


#include <stdio.h>

int main(){
	long long int n,i,min,ctr=0;
	scanf("%lld", &n);
	long int a[n];
	for(i=0;i<n;){
	    scanf("%lld",&a[i]);
	    if(i>0){
	        if(min>=a[i]){
	            for(;min>=a[i];){
	                a[i]++;
	                ctr++;
	            }
	            min=a[i];
	            i++;
	        }
	        else{
	            min=a[i];
	            i++;
	        }
	    }
	    else{
	        min=a[0];
	        i++;
	    }
	}
	printf("%lld",ctr);
}