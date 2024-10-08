// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/holi-and-colorful-houses-eb2049cb/

/*#include <stdio.h>

int main(){
	int n,t,q,x,y,ctr;
	scanf("%d", &t);
	while(t--){
	    scanf("%d %d",&n,&q);
	    char s[n];
	    scanf("%s",s);
	    while(q--){
	        ctr=0;
	        scanf("%d %d",&x,&y);
	        if(x>y){
	            int temp=x;
	            x=y;
	            y=temp;
	        }
	        int temp=s[x-1];
	        for(;x<y;x++){
	            if(s[x]!=temp){
	                ctr++;
	                temp=s[x];
	            }
	        }
	        printf("%d\n",ctr);
	   }
	}
}*/

#include <stdio.h>
    
int main() {
    int t, i,min,temp,x,y,n,q;
    char s[1001];
    int a[1001];
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d", &n, &q);
        scanf(" %s", s);
        temp = 0;
        for(i = 1; i < n; i++) {
            if(s[i] != s[i-1]) {
                temp++;
            }
            a[i] = temp;
        }
        while(q--) {
            scanf("%d %d", &x , &y);
            if(x > y) x = x + y - (y=x);
            x--; y--;
            min = a[y] - a[x];
            
            temp = a[x] + a[n-1] - a[y];
            if(s[n-1] != s[0]) temp++;
            
            if(temp < min) min = temp;
            printf("%d\n", min);
        }
    }
}