#include<stdio.h>
int main() {
    int n, a[1000], count, l;
    char s[1000];
    int i, j, k;
    scanf("%d", &n);
    scanf("%s", s);
    l=strlen(s);
    for(i=0; i<=n-1; i++)
        a[i]=1;
    i=0;
    count=n;
    j=0;
    while(count>1) {
        count=0;
        if(s[j]=='a') {
            if(i==n-1)
                i=0;
            else
                i++;

            while(a[i]==0) {
                if(i==n-1)
                    i=0;
                else
                    i++;
            }
        }
        else if(s[j]=='b') {
            a[i]=0;
            if(i==n-1)
                i=0;
            else
                i++;

            while(a[i]==0) {
                if(i==n-1)
                    i=0;
                else
                    i++;
            }
        }

        if(j==l-1)
            j=0;
        else
            j++;

        for(k=0; k<=n-1; k++) {
            if(a[k]==1)
                count++;
        }
    }
    printf("%d\n", i+1);
}