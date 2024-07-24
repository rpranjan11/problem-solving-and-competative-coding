#include <stdio.h>

int main(){
	int t,n;
	long int z;
	scanf("%d", &t);
	while(t--){
	    long int flag=0,res;
	    scanf("%ld %d",&z,&n);
	    long int a[n];
	    for(long int i=0;i<n;i++)
	        scanf("%ld",&a[i]);
	    res=z&a[0];

	    for(int i=1; i<n; i++){
            if(res==0){
                flag=1;
                break;
            }
            else{
                res=res&a[i];
                if(res==0){
                    flag=1;
                    break;
                }
            }
        }

        if(flag==1)
            printf("Yes\n");
        else
            printf("No\n");
	}
}