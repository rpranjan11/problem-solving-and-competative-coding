/*
#include <stdio.h>
long int fun(long int,long int);
int main(){
	long int x,y;
	scanf("%ld %ld", &x,&y);
	y=fun(x,y);
	x=0;
	while(y){
	    x=(x*10)+y%10;
	    y=y/10;
	}
	for(int i=0;i<3;i++){
	    y=(y*10)+x%10;
	    x=x/10;
	}
	    printf("%ld",y);
}

long int fun(long int x,long int y){
    if(x==0) { y++; }

    else if(x>0 && y==0) { fun(x-1,1); }

    else if(x>0 && y>0) { fun(x-1,fun(x,y-1)); }

    return y;
}*/

#include <stdio.h>
int recursive(int,int);

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
    printf ("%03d" ,recursive(x,y));
    return 0;
}

int recursive(int x,int y){
    if(x==0)
    return (y+1)%1000;

    if(x>0&&y==0)
        return recursive(x-1,1)%1000;
    else
        return recursive(x-1,recursive(x,y-1));
}