// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/bookcricket-bd707e2d/

#include <stdio.h>
int main() {
	int t,p;
	long int n;
	scanf("%d", &t);
	for(int m=0;m<t;m++){
	    scanf("%ld %d ",&n, &p);
	    char s[n*6];
	    scanf("%s",s);
	    
	    int score[p], p1=1, p2=2,strike;
	        strike=p1;
	        for(int k=0;k<p;k++)
	           score[k]=0;
	        
	    for(int i=0;s[i]!='\0';i++){
	        if(s[i]==48){ }
	        
	        else if(s[i]==49){score[strike-1]++; if(strike==p2) strike=p1; else strike=p2; }
	        
	        else if(s[i]==50){score[strike-1]+=2; }
	        
	        else if(s[i]==52){score[strike-1]+=4; }
	        
	        else if(s[i]==54){score[strike-1]+=6; }
	        
	        else if(s[i]==87){
	            if(p1<p2 && strike==p1){ p1=p2+1; strike=p1; }
	            
	            else if(p1<p2 && strike==p2){ p2=p2+1; strike=p2; }
	           
	            else if(p2<p1 && strike==p1){ p1=p1+1; strike=p1; }
	            
	            else if(p2<p1 && strike==p2){ p2=p1+1; strike=p2; }
	        }
	        
	        if((i+1)%6==0){ if(strike==p2) strike=p1; else strike=p2; }
	    }
	    printf("Case %d:\n",m+1);
	    for(int j=1;j<=p;j++){
	        
	        if(score[j-1]==0  && j>p1 && j>p2) printf("Player %d: DNB\n",j);
	        
	        
	        else if(j==p1 || j==p2) printf("Player %d: %d*\n",j,score[j-1]);
	        
	        else printf("Player %d: %d\n",j,score[j-1]);
	    }
	    
	}
}