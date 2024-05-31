#include <stdio.h>

int main(){
	long int n;
	scanf("%ld", &n);
	long int hgt[n], check = 0, count = 1;
	for(long int i=0; i<n; i++) {
	    scanf("%ld", &hgt[i]);
	    if(hgt[i] > check) {
	        check = hgt[i];
	    }
	    else if(hgt[i] == check) {
	        //count++;
	    }
	    else {
	        count++;
	        check = hgt[i];
	    }
	}
	printf("%ld", count);
}