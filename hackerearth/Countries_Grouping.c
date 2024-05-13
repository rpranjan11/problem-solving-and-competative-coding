#include <stdio.h>

int main(){
	int t,n;
	scanf("%d", &t);
	while(t--){
	    scanf("%d", &n);
	    int a[n];
	    for(int i=0;i<n;i++)
	        scanf("%d", &a[i]);
	    int countries = 0, i = 0;
        int check=0;

        while (i < n) {
            int curr_size = a[i];
            int num = a[i];
            while (num > 0) {
                if (a[i] != curr_size) {
                    check++;
                    break;
                }
                else
                    num--;
                i++;
            }
            countries++;
        }
        if(check)
            printf("Invalid Data\n");
        else
            printf("%d\n",countries);
	}
}