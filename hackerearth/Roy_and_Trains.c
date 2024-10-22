#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    int t0,t1,t2,v1,v2,d;
	    float a,b;
	    scanf("%d %d %d %d %d %d",&t0,&t1,&t2,&v1,&v2,&d);
	    a=(float)d/v1;
	    a=a*60;
	    int c=a+t1;
	    if((a+t1)>c)
	        c++;
	    b=(float)d/v2;
	    b=b*60;
	    //printf("%f ",b);
	    int e=b+t2;
	    if((b+t2)>e)
	        e++;
	    if(t0>t1 && t0>t2)
	        printf("-1\n");
	    else if(t0>t1)
	        printf("%d\n",e);
	    else if(t0>t2)
	        printf("%d\n",c);
	    else
	        printf("%d\n",(c<e)?c:e);
	}
}