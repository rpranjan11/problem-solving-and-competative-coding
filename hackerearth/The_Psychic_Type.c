#include <stdio.h>

int main(){
	int n,s,e,check=1;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
	   scanf("%d",&a[i]);
	scanf("%d %d",&s,&e);
	check=0;
	for(int i=0;i<n;i++){
	    /*if(s==e){
	        if(a[s]==e){
	            check=1;
	            break;
	        }
	        s=a[s];
	    }*/
	    if(s==e){
	        check=1;
	        break;
	    }

	    else{
	       if(a[s-1]==e){
	          check=1;
	          break;
	       }
	    s=a[s-1];
	    }
	}
	if(check)
	    printf("Yes");
	 else
	    printf("No");
}