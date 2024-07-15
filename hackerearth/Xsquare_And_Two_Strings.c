#include <stdio.h>
#include<string.h>

int main(){
	long int t;
	scanf("%d", &t);
	while(t--){
	    char s[100000]={'\0'},s1[100000]={'\0'};
	    long int c[26]={0},c1[26]={0},ctr=0;
	    scanf("%s",s);
	    scanf("%s",s1);
	    for(long int i=0;s[i]!='\0';i++)
	        c[s[i]-97]++;
	    for(long int i=0;s1[i]!='\0';i++)
	        c1[s1[i]-97]++;

	    for(int i=0;i<26;i++){
	        //printf("%ld %ld \n",c[i],c1[i]);
	        if( (c[i]>0 && c1[i]==0) || (c[i]==0 && c1[i]>0) ){
	            ctr++;
	            //printf("%ld %ld \n",c[i],c1[i]);
	            break;
	        }
	    }

	    if(ctr>0)
	        printf("No\n");
	    else
	        printf("Yes\n");
	}
}