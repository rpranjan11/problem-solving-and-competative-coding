import java.io.*;

import java.util.*;

class Main{
    public static void main(String[] args) throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n,l,m;
        String[] src=br.readLine().trim().split(" ");
        n=Integer.parseInt(src[0]);
        l=Integer.parseInt(src[1]);
        m=Integer.parseInt(src[2]);
        src=br.readLine().trim().split(" ");
        int arr[]=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=Integer.parseInt(src[i]);
        }
        //	int count=0;
        if(l==0){
            System.out.println("0");
        }
        else{
            int count=0;
            int lim=n-m+1;
            for(int i=0;i<lim;i++){
                boolean flag=true;
                for(int j=i;j<i+m;j++){
                    if(arr[j]>l){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    count++;
                }
            }
            System.out.println(count);
        }
    }
}