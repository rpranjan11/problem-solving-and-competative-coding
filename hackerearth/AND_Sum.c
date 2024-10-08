// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/and-sum-54d31846/

/*
#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t); 
	while(t--){
	    long int n;
	    unsigned long long int sum=0;
	    scanf("%ld",&n);
	    long int a[n];
	    for(long int i=0;i<n;i++){
	        scanf("%ld",&a[i]);
	        
	    }
	}
}*/


#include <stdio.h>
#define M 1000000007
long long int fast_pow(long long int x,long long int n)
{
    long long int res = 1;
    while(n>0)
    {
    if (n%2 == 1)
        res = (res*x)%M;
    x = (x*x)%M;
    n = n/2;
    }
    return res;
}
int main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n,x,p=0,i,j;
        scanf("%lld",&n);
        long long int a[n],c;
        for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        long long int ans=0;
        for(i=0;i<32;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
                    if (a[j]&(1 << i))
                c++;
            }
                ans = (ans + ((fast_pow(2,c)-1)*fast_pow(2,i))%M)%M;
        }
        printf("%lld\n",ans);
    }
    
}