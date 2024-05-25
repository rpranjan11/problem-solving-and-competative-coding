#include <stdio.h>

    int main()
    {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[100005],i,j,city,m;
        for(i=1;i<=k;i++)
        {
            scanf("%d",&m);
            for(j=0;j<m;j++)
            {
                scanf("%d",&city);
                a[city]=i;
            }
        }
        int q,x,y,z1;
        scanf("%d",&q);
        while(q--)
        {
            scanf("%d%d",&x,&y);
            if(a[x]>a[y])
            {
                if((a[x]-a[y])<(k+a[y]-a[x]))
                z1=a[x]-a[y];
                else
                z1=k+a[y]-a[x];
            }
            else
            {
                if((a[y]-a[x])<(k+a[x]-a[y]))
                z1=a[y]-a[x];
                else
                z1=k+a[x]-a[y];
            }
            printf("%d\n",z1);
        }
        return 0;
    }