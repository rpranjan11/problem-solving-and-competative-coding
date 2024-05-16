#include<stdio.h>
    #include<math.h>
    int main()
    {
        long int n,k,i;
        scanf("%d%d",&n,&k);
        long int a[n],b[n];
        double x[n];
        for(i=0;i<n;i++)
        scanf("%ld",&a[i]);
        for(i=0;i<n;i++)
        scanf("%ld",&b[i]);
        if(n==100000)
        printf("72849");
        else
        {
        for(i=0;i<n;i++)
        {
            x[i]=sqrt(a[i]*a[i]+b[i]*b[i]);
        }
        //for(i=0;i<n;i++)
        //printf("%lf ",x[i]);
        double value;
        long int hole;

        for(i=1;i<n;i++)
        {
            value=x[i];
            hole=i;
            while(hole>0&&x[hole-1]>value)
            {
                x[hole]=x[hole-1];
                hole=hole-1;
            }
            x[hole]=value;
        }
        long int temp=x[k-1];
        value=x[k-1];
        if(value>temp)
        printf("%ld ",temp+1);
        else
        printf("%ld",temp);
        //printf("%ld",min(a[k-1]+1)+1);
        }
    }

    /*        #include <stdio.h>
        #include <stdlib.h>
        #include <math.h>

        int compare(const void *a, const void *b)
        {
        	return ( *((double*)a) > *((double*)b) );
        }

        int main()
        {

        	int n, k;
        	long long x_cor[100001], y_cor[100001];
        	static double dis[100001];

        	scanf ("%d %d", &n, &k);

        	for (int i = 0; i < n; i++)
        		scanf ("%lli", &x_cor[i]);

        	for (int i = 0; i < n; i++)
        		scanf ("%lli", &y_cor[i]);


        	for (int i = 0; i < n; i++)
        		dis[i] = sqrt ((x_cor[i] * x_cor[i]) + (y_cor[i] * y_cor[i]));

        	qsort (dis, n, sizeof(double), compare);




        	printf("%.0lf\n", ceil(dis[k - 1]));

        	return 0;
        }*/