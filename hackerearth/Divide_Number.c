// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/divide-number-a410603f/

#include<stdio.h>

int main() {
    long long int t,x;
    scanf("%lld",&t);
    while(t--) {
        scanf("%lld",&x);
        //if(x%2!=0)
          //  printf("-1");
        if(x<4 || x%2==1)
            printf("-1");
        else if(x%4==0)
            printf("%lld",(x/4)*(x/4)*(x/4)*(x/4));
        else if(x%6==0)
            printf("%lld",(x/6)*(x/6)*(x/3)*(x/3));
        else if(x%10==0)
            printf("%lld",(x/10)*(x/2)*(x/5)*(x/5));
        else
            printf("-1");
        printf("\n");
    }
}