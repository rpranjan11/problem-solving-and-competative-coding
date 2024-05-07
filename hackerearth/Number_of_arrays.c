#include<stdio.h>
    int main()
    {
        int t;
        scanf("%d",&t);
        while(t--){
        long long int n,k,q,i,min=1000000001,max=0;
        scanf("%lld%lld%lld",&n,&k,&q);
        long long int a[100001];
        if(k==1)
        {
            for(i=0;i<n;i++)
            {
                scanf("%lld",&a[i]);
                if(a[i]>max)
                    max=a[i];
            }
            if(max<q)
                printf("%lld\n",max);
            else
                printf("NO\n");
        }
        else
        {for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(a[i]<min)
                min=a[i];
        }
        if(min<q)
            printf("%lld\n",min);
        else
            printf("NO\n");}}
    }