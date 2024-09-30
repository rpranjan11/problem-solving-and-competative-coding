// Problem Statement Link : https://www.hackerrank.com/contests/projecteuler/challenges/euler001/

import java.util.*;

public class Solution {

    public static long CalSum(int number, int divisor){

        long quotient = (long) number/divisor;

        long sum = divisor * ((quotient*(quotient+1))/2);

        return sum;
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int testcase = in.nextInt();
        
        while(testcase>0) {                                 
            int number = in.nextInt();
            long ans = CalSum(number-1,3) + CalSum(number-1,5) - CalSum(number-1,15);
            System.out.println(ans);
            testcase--;
        }
    }
}
