#include <stdio.h>

    int main()
    {
        int t,n,a[100000],b,temp,k;
        scanf("%d",&t);
        while(t--)
        {
        	k=0;
        	scanf("%d",&n);
        	for(int i=0;i<n;i++)
        	{
        		scanf("%d",&b);
        		if(b==0)
        		a[k++]=b;
        		while(b>0)
        		{
        			a[k++]=b%10;
        			b=b/10;
        		}
        	}
        	for(int i=0;i<k;i++){
        		for(int j=0;j<k-1;j++)
        		{
        			if(a[j]<a[j+1])
        			{
        				temp=a[j];
        				a[j]=a[j+1];
        				a[j+1]=temp;
        			}
        		}
        	}
        	for(int i=0;i<k;i++)
        	printf("%d",a[i]);
        	printf("\n");
        }
        return 0;