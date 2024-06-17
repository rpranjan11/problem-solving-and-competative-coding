#include <stdio.h>

int main(){
	int n, max;
	scanf("%d %d", &n, &max);
	int q;
	int skip = 0;
	int count = 0;
	for(int i = 0; i<n; i++) {
	    scanf("%d", &q);
	    if(skip < 2) {
	        if(q <= max)
	            count++;
	        else
	            skip++;
	    }
	    else {
            break;
	    }
	}
	printf("%d",count);
}