#include <stdio.h>

int main(){
	int t;
	long int n,c;
	scanf("%d", &t);
	while(t--){
	    c=0;
	    scanf("%ld",&n);
	    for(int i=1;i<=n;i++){
	        for(int j=i+1;j<=n;j++){
	            if(i!=j && ((i^j)<=n)){
	                //printf("%d %d\n",i,j);
	                c++;
	            }
	        }
	    }
	    printf("%ld\n",c);
	}
}