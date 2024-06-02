#include <stdio.h>

void main(){
	int n,min,max;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
	   scanf("%d",&a[i]);
	min=a[0];max=a[0];
	for(int i=0;i<n;i++){
	    if(a[i]<min)
	      min=a[i];
	    if(a[i]>max)
	      max=a[i];
	}
    int j=min,c1=0;
    //printf("%d\n",c1);
	for(min=min+1;min<max;min++){
	    for(int i=0;i<n;i++){
	        if(a[i]==min){
	           c1++;
	           break;
	        }
	    }
	}
	//printf("%d\n",c1);
	if(c1+1==(max-j))
	  printf("YES");
	else
	  print