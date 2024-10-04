// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/pikachu-loves-or-0c02a270/

#include <stdio.h>
int main(){
	int n,k;
	scanf("%d %d", &n,&k); 
	int a[n];
	for(int i=0;i<n;i++) {
	    scanf("%d ",&a[i]);
    }
	if(k>1024) {
	    k=1024;
    }
	    //don't go upto k(10^9) more number of  OR will set all bits of a number. 
	    //try not to iterate uselessly it is given the number will be max 32 bit so iterate max k till 32^2=1024 implise if k greater than 100 than make it 100 dont iterate more
	while(k--) {
        for(int i=n-1;i>0;i--) {
            a[i]=a[i]|a[i-1];
        }
    }
	for(int i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
}
