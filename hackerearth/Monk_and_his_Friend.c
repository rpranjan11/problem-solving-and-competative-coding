#include <stdio.h>

int main(){
	long int n;
	scanf("%ld", &n);
	while(n--){
	    unsigned long long int a,b,i,j,count=0;
	    int ab[55],bb[55];
	    scanf("%llu %llu", &a,&b);
	    if(a==b)
	        printf("0\n");
	    else{
	        for(i=0,j=0;a>0 || b>0;i++,j++){
                ab[i]=a%2;
                a=a/2;
                bb[j]=b%2;
                b=b/2;
                if(ab[i]!=bb[j])
                    count++;
            }
            printf("%llu\n",count);
	    }
	}
}

/*
#include <stdio.h>

int main(){
	long int n;
	scanf("%ld", &n);
	while(n--){
	    unsigned long long int a,b,i,j,count=0;
	    int ab[55],bb[55];
	    scanf("%llu %llu", &a,&b);
	    if(a==b)
	        printf("0\n");
	    else{
	        for(i=0;a>0;i++){
                ab[i]=a%2;
                a=a/2;
            }
            for(j=0;b>0;j++){
                bb[j]=b%2;
                b=b/2;
            }
            for(i=i-1,j=j-1;i>=0 && j>=0;i--,j--){
                if(ab[i]!=bb[j])
                    count++;
            }
            printf("%llu\n",count);
	    }
	}
}
*/