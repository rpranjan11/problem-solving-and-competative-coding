#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    long int tmp,a[n],max=0,c=0,sum=0;
	    for(long int i=0;i<n;i++){
	        scanf("%ld",&tmp);
	        sum+=tmp;
	        c=0;
	        while(tmp){
	            if(tmp%2==1)
	                c++;
	            tmp=tmp/2;
	        }
	        a[i]=c;
	    }
	    if(sum==0)
	        printf("0\n");
	    else{
	        sum=0;
	    for(int j=0;j<k;j++){
	        long int temp;
	        max=0;
	        for(long int i=0;i<n;i++){
	            if(a[i]>max){
	                max=a[i];
	                temp=i;
	            }
	        }
	        sum+=a[temp];
	        a[temp]=0;
	    }

	    printf("%ld\n",sum);
	    }
	}
return 0;
}