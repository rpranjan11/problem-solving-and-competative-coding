#include <stdio.h>

int main(){
	char s[100],a;
	int c=0;
	scanf("%s", s);
	a=s[0];
	for(int i=0;s[i]!='\0';i++){
	    if(s[i]!=a){
	        a=s[i];
	        c=0;
	    }
	    c++;
	    if(c==6)
	      break;
	}
	if(c==6)
	  printf("Sorry, sorry!");
	else
	  printf("Good luck!");
}