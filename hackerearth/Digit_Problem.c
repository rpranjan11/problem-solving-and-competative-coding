/*
#include <stdio.h>

int main(){
	long long int x,y;
	int c=0;
	long int k;
	scanf("%lld %ld", &x,&k);
	y=x;
	while(y){
	    y=y/10;
	    c++;
	}

	int j=c-k;
	while(j){
	   y=(y*10)+x%10;
	   x=x/10;
	   j--;
	}

	for(int i=0;i<k;i++)
	    printf("9");
	for(int i=1;i<=c-k;i++){
	   	printf("%lld",y%10);
	   	y=y/10;
	}
}*/

#include <stdio.h>

int main(){
	int k,i=0;
	char s[18]={0};
	scanf("%s %d",s,&k);
	while(s[i]!='\0'){
	   if(i<k && s[i]==57){
	       printf("%c",s[i]);
	       k++;
	   }
	   else if(i<k)
	       printf("9");
	   else
	       printf("%c",s[i]);

	   i++;
	}
}