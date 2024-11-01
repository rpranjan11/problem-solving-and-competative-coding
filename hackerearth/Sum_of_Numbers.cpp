#include <iostream>
using namespace std;
#include <cmath>
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,sum;
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++)
            cin>>a[i];
        cin>>sum;
        for(i=0;i<pow(2,n);i++){
            x=0;
            for(j=0;j<n;j++){
                if(i & 1<<j)
                    x+=a[j];
            }
            if(x==sum){
                cout<<"YES"<<endl;
                break;
            }
        }
        if(i==pow(2,n))
        cout<<"NO"<<endl;
    }
return 0;
}