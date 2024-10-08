// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/hunny-bunny-eebee22a/

#include <stdio.h>

int main(){
	int testcase;
	scanf("%d", &testcase);
	while(testcase--) {
	    long int num;
	    scanf("%ld", &num);
	    long long int a[num];
	    int check = 0;
	    unsigned long long int sum = 0;
	    for(long int i=0; i<num; i++){
	        scanf("%lld", &a[i]);
	        if(a[i] > 0)
	            sum += a[i];
	    }
	    if(sum == 0)
	        check++;
	    while(sum > 1) {
	        if(sum%2 == 1) {
	            check++;
	            break;
	        }
	        sum = sum/2;
	    }
	    if(check)
	        printf("No\n");
	    else
	        printf("Yes\n");
	}
}