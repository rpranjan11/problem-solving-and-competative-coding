// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/pikachu-loves-or-0c02a270/

#include <stdio.h>
int main() {
	int n, k;
	scanf("%d %d", &n, &k); 
	int a[n];
	for(int i=0; i<n; i++) {
	    scanf("%d ", &a[i]);
    }
	if(k > 1024) {
	    k = 1024;
    }
	while(k--) {
        for(int i=n-1;i>0;i--) {
            a[i] = a[i] | a[i-1];
        }
    }
	for(int i=0; i<n; i++) {
        printf("%d ", a[i]);
    }
}
