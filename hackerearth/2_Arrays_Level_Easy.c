
// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/2-arrays-90c9019c/

#include <stdio.h>
#include <stdlib.h>

int main(){
	long n;
	scanf("%ld", &n);
	long num, chk1=0, chk2=0;
	long long int sum1=0, sum2=0;
	for(long i=0; i<n; i++) {
	    scanf("%ld", &num);
	    if(num > 0)
	        sum1 += num;
	    else
	        chk1++;
	}
	for(long i=0; i<n; i++) {
	    scanf("%ld", &num);
	    if(num > 0)
	        sum2 += num;
	    else
	        chk2++;
	}
	if(/*sum1 == sum2 && */chk1 == chk2)
	    printf("Infinite");
	else if(chk1 > 0 && sum1 > sum2)
	    printf("0");
	else if(chk2 > 0 && sum2 > sum1)
	    printf("0");
	else if(chk1 == 1 || chk2 == 1)
	    printf("1");
    else
        printf("%lld",llabs(sum2-sum1)+1);
}