/*
#include <stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
	    char a[100000]={'\0'},b[100000]={'\0'};
	    int ca[26]={0},cb[26]={0};
	    scanf("%s",a);
	    scanf("%s",b);
	    for(long int i=0;a[i]!='\0';i++)
	        ca[a[i]-97]++;
	    for(long int i=0;a[i]!='\0';i++)
	        cb[b[i]-97]++;
	    for(int i=0;i<26;i++){
	        if(ca[i]>cb[i])
	            ca[i]=ca[i]-cb[i];
	        else if(cb[i]>ca[i])
	            cb[i]=cb[i]-ca[i];
	        else
	            ca[i]=cb[i]=0;
	    }
	    int temp1=0,temp2=0;
	    for(int i=0;i<26;i++){
	        if(ca[i]>0)
	            temp1++;
	        if(cb[i]>0)
	            temp2++;
	    }
	    if(temp1>0 && temp2==0)
	        printf("You win some.\n");
	    else if(temp2>0 && temp1==0)
	        printf("You lose some.\n");
	    else if(temp1==0 && temp2==0)
	        printf("You draw some.\n");
	}
}*/



    #include <stdio.h>
    #include <string.h>
    int main()
    {
        int t,i,x,f1,f2,l1,l2;
        char a[100001],b[100001],c;
        int l[26];
        scanf("%d\n",&t);
        while(t--)
        {
            f1=f2=0;
            for(i=0;i<26;i++)
                l[i]=0;
            //fflush(stdin);
            //scanf("%s",&a);
            gets(a);
            //fflush(stdin);
            gets(b);
            //scanf("%s",&b);
            l1=strlen(a);
            l2=strlen(b);
            //printf("%s\n",a);
            //printf("%s\n",b);
            //for(i=0;i<26;i++)
              //  printf("%d ",l[i]);
            //printf("\n");
            for(i=0;i<l1;i++)
            {
                c=a[i];
                if(c>='a' && c<='z')
                {
                    x = c-97;
                    l[x]++;
                }
            }
            //for(i=0;i<26;i++)
             //   printf("%d ",l[i]);
            //printf("\n");
            for(i=0;i<l2;i++)
            {
                c=b[i];
                if(c>='a' && c<='z')
                {
                    x = c-97;
                    l[x]--;
                }
            }
            //for(i=0;i<26;i++)
              //  printf("%d ",l[i]);
            //printf("\n");
            for(i=0;i<26;i++)
            {
                if(l[i]>0)
                    f1=1;
                if(l[i]<0)
                    f2=1;
            }
            //for(i=0;i<26;i++)
              //  printf("%d ",l[i]);
            if(f1 && f2)
                printf("You draw some.\n");
            else if(f1 && !f2)
                printf("You win some.\n");
            else
                printf("You lose some.\n");
        }
        return 0;
    }