// Problem Statement Link : https://www.hackerearth.com/problem/algorithm/count-vowels-1-1da7c4d0/

import java.util.Scanner;
class Solution {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0) {
            String s = in.next();
            long sum = 0;
            long n = s.length();
            for(int i = 0; i < n; i++) {
                if(isVowel(s.charAt(i))) {
                    sum += (n-i) * (i+1);
                }
            }
            System.out.println(sum);
        }
    }
    static boolean isVowel(char c) {
        switch(c) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                return true;
        }
        return false;
    }
}