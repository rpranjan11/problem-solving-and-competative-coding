#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    int x,y,min=10000000;
	    scanf("%d %d",&x,&y);
	    int a[x];
	    for(int i=0;i<x;i++) {
	        scanf("%d",&a[i]);
	        if(a[i]<min)
	            min=a[i];
	    }
	    if(y>min)
	        printf("%d\n",y-min);
	    else
	        printf("0\n");
	}
}