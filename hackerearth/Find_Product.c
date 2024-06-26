#include<stdio.h>

void main(){
	int n;
	unsigned long add=1;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
	   scanf("%d",&a[i]);
	for(int i=0;i<n;i++)
	   add=(add*a[i])% (1000000007);
	printf("%lu", add);
}