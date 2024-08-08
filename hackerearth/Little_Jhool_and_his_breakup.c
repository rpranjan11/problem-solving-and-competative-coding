#include <stdio.h>

int main(){
	int l,o,v,e,i;
	char s[100]={'\0'};
	scanf("%s", s);
	l=o=v=e=0;
	for(i=0;s[i]!='\0';i++){
	    if(s[i]==108){
	        l++;
	        break;
	    }
	}
	for(;s[i]!='\0';i++){
	    if(s[i]==111){
	        o++;
	        break;
	    }
	}
	for(;s[i]!='\0';i++){
	    if(s[i]==118){
	        v++;
	        break;
	    }
	}
	for(;s[i]!='\0';i++){
	    if(s[i]==101){
	        e++;
	        break;
	    }
	}
	if(l>0 && o>0 && v>0 && e>0)
	    printf("I love you, too!");
	else
	    printf("Let us breakup!");
}