#include <stdio.h>
int check_palindrome(int);
int main(){
	int t;
	long int a,b,check;
	scanf("%d", &t);
	while(t--){
	    scanf("%ld %ld",&a,&b);
	    for(;a<=b;a++){
	        if(a<10)
	            check+=1;
	        else
	            check+=check_palindrome(a);
	    }
        printf("%ld\n",check);
        check=0;
	}

}

int check_palindrome(int a)
{
   int t = a,reverse=0;

   while (t != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + t%10;
      t = t/10;
   }

   if (a == reverse)
      return 1;
   else
      return 0;
}