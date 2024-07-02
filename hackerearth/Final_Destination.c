#include <stdio.h>
#define STR 100000
int main(){
	int i=0,j=0;
	char s[STR];
	scanf("%s", s);
	for(int k=0;s[k]!='\0';k++){
	    if(s[k]=='L')
	      i--;
	    else if(s[k]=='R')
	      i++;
	    else if(s[k]=='D')
	      j--;
	    else if(s[k]=='U')
	      j++;
	}
	printf("%d %d",i,j);
}

/*#include <stdio.h>
#define STR 100000
int main()
{
 int x=0,y=0,i;
 char s[STR];
 scanf("%s",s);
 for(i=0;s[i]!='\0';i++)
 {
  if(s[i]=='L')
  x--;
  if(s[i]=='R')
  x++;
  if(s[i]=='D')
  y--;
  if(s[i]=='U')
  y++;
 }
 printf("%d %d",x,y);
    return 0;

}*/