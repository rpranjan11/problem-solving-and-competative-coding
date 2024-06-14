#include <stdio.h>

void main(){
	long int n,c[7]={0},j;
	scanf("%ld",&n);
	char s[n];
	scanf("%s",s);
	for(long int i=0;i<n;i++){
	    if(s[i]=='h')
	      c[0]++;
	    else if(s[i]=='a')
	      c[1]++;
	    else if(s[i]=='c')
	      c[2]++;
	    else if(s[i]=='k')
	      c[3]++;
	    else if(s[i]=='e')
	      c[4]++;
	    else if(s[i]=='r')
	      c[5]++;
	    else if(s[i]=='t')
	      c[6]++;
	}
	//for(int i=0;i<7;i++)
	  //printf("%ld\n",c[i]);
	c[0]/=2;
	c[1]/=2;
	c[4]/=2;
	c[5]/=2;
    j=c[0];
    for(int i=1;i<7;i++){
       if(c[i]<j)
          j=c[i];
    }
    printf("%ld",j);

}