#include <stdio.h>

int main(){
	int t,p,a;
	long long int sum;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
	    scanf("%d",&p);
	    sum=0;
	    for(int j=0;j<p;j++){
	        scanf("%d",&a);
	        /*if(a%2==0)
	          sum=sum+a;*/

	          while(a%2==0){
	              a=a>>1;
	              sum++;
	          }
	    }
	    //sum=sum/2;
	    if(sum%2==0)
	       printf("Alan\n");
	    else
	      printf("Charlie\n");
	}
}