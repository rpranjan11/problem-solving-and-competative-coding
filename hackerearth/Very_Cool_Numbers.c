#include<stdio.h>
int main() {
    int t,i,k,j,n;
    scanf("%d",&t);
    while(t--) {
        int count1=0;
        scanf("%d %d",&n,&k);
        for(j=n;j>=1;j--) {
            int count=0;
            int temp=j;
            while(temp>0) {
                if((temp%8)==5) {
                    count++;
                }
                temp=temp/2;
                if(count>=k) {
                    break;
                }
            }
            if(count>=k) {
                count1++;
            }
        }
        printf("%d\n",count1);
    }
    return 0;
    }