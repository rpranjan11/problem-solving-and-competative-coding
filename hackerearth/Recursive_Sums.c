#include <stdio.h>

int main(){
	int t,m;
	unsigned long long int sum,a,l,d;
	scanf("%d", &t);
	for(int i=0;i<t;i++){
	    scanf("%d",&m);
	    sum=0;a=0;

	    for(long j=0;j<m;j++){
	        scanf("%llu %llu",&l,&d);
	        sum=sum+(l*d);
	    }
	    while(sum>9){
	        while(sum>0){
	            a=a+sum%10;
	            sum=sum/10;
	        }
	        sum=a; a=0;
	    }
	    printf("%llu\n",sum);
	}
}

/*
#include <iostream>
#include <cstdlib>
using namespace std;
unsigned long long int sumdigit(unsigned long long int num)
{
    unsigned long long int r,sum=0;
    while(num!=0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    if(sum<10)
        return sum;
    else
        return sumdigit(sum);
}
int main()
{
    unsigned long long T,M,len,d,i,j,k,sum=0,x,y;
    cin>>T;
    for(i=0;i<T;i++)
    {
        cin>>M;
        sum = 0;
        for(j=0;j<M;j++)
        {
            cin>>len>>d;
            sum = sum + len*d;
            if(sum>9)
            {
                x=sum;
                sum=0;
                while(x!=0)
                {
                    y=x%10;
                    sum = sum + y;
                    x=x/10;
                }
            }
        }
        if(sum>9)
            cout<<sumdigit(sum)<<endl;
        else
            cout<<sum<<endl;
    }
    return 0;
}
*/