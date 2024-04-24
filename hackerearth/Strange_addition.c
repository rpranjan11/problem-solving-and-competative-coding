#include <stdio.h>
long int rev(long int n){
    long int m=0;
    while(n){
        m=m*10+(n%10);
        n/=10;
    }
    return m;
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    long int n,m,sum;
	    scanf("%ld %ld",&n,&m);
	    n=rev(n);
	    m=rev(m);
	    sum=rev(n+m);
	    printf("%ld\n",sum);
	}
}