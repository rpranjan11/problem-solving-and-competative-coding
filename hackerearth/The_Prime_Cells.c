#include <stdio.h>
int check_prime(int);
int main(){
	int n,l,r,u,d,sum=0,c=0;
	scanf("%d", &n);
	int a[n][n];
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++)
	       scanf("%d",&a[i][j]);
	}
	for(int i=0;i<n;i++){
	    for(int j=0;j<n;j++){
	        sum=0;
	        l=a[i][j-1];  r=a[i][j+1];   u=a[i-1][j];  d=a[i+1][j];
	        //printf("%d %d %d %d sum=%d \n",l,r,u,d,sum);
	        if(i==0) u=0;

	        if(j==0) l=0;

	        if(i==n-1) d=0;

	        if(j==n-1) r=0;

	        sum=l+r+u+d;

	        //printf("%d %d %d %d sum=%d \n\n",l,r,u,d,sum);
	        if(check_prime(sum))
	           c++;
	    }
	}
	printf("%d",c);
}

int check_prime(int a)
{
   int c;

   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   return 1;
}