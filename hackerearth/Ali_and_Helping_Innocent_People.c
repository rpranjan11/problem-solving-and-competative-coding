// https://www.hackerearth.com/problem/algorithm/cartag-948c2b02/submissions/

#include<stdio.h>
int main() {
    char a[9];
    scanf("%s",a);
    if(a[2]=='A' ||a[2]=='E' ||a[2]=='I' ||a[2]=='O' ||a[2]=='U' ||a[2]=='Y') {
        printf("invalid");
    }
    else if((a[0]+a[1])%2==1 ||(a[3]+a[4])%2==1 ||(a[4]+a[5])%2==1 ||(a[7]+a[8])%2==1) {
        printf("invalid");
    }
    else {
        printf("valid");
    }
}