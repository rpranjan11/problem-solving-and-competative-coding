#include <stdio.h>

int setbits(long long n) {
    int c=0;
    while(n){
        n=n&(n-1);
        c++;
    }
    return c;
}

int main() {
    int t;
    for(scanf("%d",&t);t>0;t--) {
        int n;
        scanf("%d",&n);
        long long a[n],b[n];
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
            b[i]=setbits(a[i]);
        }
        printf("\n");
        for(int i=1;i<=60;i++) {
            for(int j=0;j<n;j++) {
                if(b[j]==i)
                    printf("%lld ",a[j]);
            }
        }
    }
}