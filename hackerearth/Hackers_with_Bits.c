/*
#include <stdio.h>

int main(){
	int n,one=0,max=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);

	for(int i=0;i<n;i++){
	    if(a[i]==1)
	        one++;
	    else if(a[i]==0){
	        one++;
	        int k=0;
	        for(int j=i+1;a[j]!=0;j++){
	            one++;
	            k++;
	        }
	        if(k==1 || k==0)
	            one--;
	        if(one>max){
	            max=one;
	            //printf("%d\n",max);
	            one=0;
	        }
	        else
	            one=0;
	    }

	}
	if(max==0)
	    printf("%d",one);
	else if(max==1)
	  printf("0");
	else
	  printf("%d",max);
}
*/



    #include <stdio.h>

    int main()
    {
        unsigned int N;
        scanf("%u",&N);
        unsigned int A[N],temp;
        for(unsigned int i=0;i<N;i++){
            scanf("%u",&temp);
            A[i] = temp;
        }
        unsigned int counter;
        counter = 0;
        for(unsigned int i=0;i<N;i++){
            if(A[i])
                counter++;
        }

        if(counter == N)
            printf("%u",N);
        else if( counter == N-1)
            printf("%u",N-1);
        else{
            unsigned int i,j,temp,k,max_length=0;
            for(i=0;i<N-1;i++){
                for(j=i+1;j<N;j++){
                    if(A[i]==0 && A[j]==1 || A[i]==1 && A[j]==0){
                        //printf("\tbfr a[i]=%d a[j]=%d",A[i],A[j]);
                        temp = A[i];
                        A[i] = A[j];
                        A[j] = temp;
                        //printf("\tmid a[i]=%d a[j]=%d",A[i],A[j]);
                        counter = 0;
                        for(k=0;k<N;k++){
                            if(A[k]==1)
                                counter++;
                            else{
                                if(counter> max_length){
                                    max_length = counter;

                                }
                                counter = 0;
                            }
                        }
                        if(counter> max_length)
                            max_length = counter;
                        temp = A[i];
                        A[i] = A[j];
                        A[j] = temp;
                        //printf("\trstr a[i]=%d a[j]=%d",A[i],A[j]);
                    }
                }
            }
            printf("%u",max_length);
        }


        return 0;
    }


/*
#include <stdio.h>

int main(){
	int n,one=0,zero=0,max=0;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++)
	    scanf("%d",&a[i]);

	for(int i=0;i<=n;i++){
	    if(a[i]==1)
	        one++;
	    else if(one>max){
	        max=one;
	        one=0;
	        zero++;
	    }
	    else{
	        one=0;
	        zero++;
	    }
	}

	if(max>0)
	  printf("%d",max+1);
	else
	  printf("%d",max);
}*/