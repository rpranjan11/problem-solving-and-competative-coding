#include <stdio.h>

int main(){
	int num,i,j;
	int ctr=0;
	scanf("%d", &num);
	while(num--){
	    char s[100000]={'\0'};
	    scanf("%s",s);
	    ctr=0;
	    for(i=0;s[i]!='\0';i++){
	        if(s[i]=='B'){
	            for(j=1;j<=2;j++){
	                if(s[i+j]=='W'){
	                  ctr++;
	                  s[i+j]='z';
	                }
	                if(s[i-j]=='W'){
	                  ctr++;
	                  s[i-j]='z';
	                }
	            }
	        }
	    }
	    printf("%d\n",ctr);
	}
return 0;
}
/*#include <stdio.h>
int main()
{
 int t,i,j,c;
 scanf("%d",&t);
 while(t--)
 {
  char str[100000]={'\0'};
  c=0;
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
   if(str[i]=='B')
   {
    for(j=1;j<=2;j++)
    {
     if(str[i+j]=='W')
     {
      c++;
      str[i+j]='a';
     }
     if(str[i-j]=='W')
     {
      c++;
      str[i-j]='a';
     }
    }
   }
  }
  printf("%d\n",c);
 }
    return 0;
}*/