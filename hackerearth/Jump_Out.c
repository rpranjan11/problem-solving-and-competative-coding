#include <stdio.h>

int main(){
	int n,a;
	scanf("%d", &n);
	//int a[n];
	for(int i=1;i<=n;i++){
	    scanf("%d",&a);
	    if((a+i)>n){
	        printf("%d",i);
	        break;
	        //b[j]=i;
	        //j++;
	    }
	}
	/*min=b[0];
	for(int i=0;i<3;i++)
	  printf("%d ",b[i]);
	for(int k=1;k<n;k++){
	    if (b[k]<min && b[k]>0)
	       min=b[k];
	}
	printf("%d",min);*/
}