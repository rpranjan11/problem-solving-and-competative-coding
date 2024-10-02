// https://www.hackerearth.com/problem/algorithm/seven-segment-display-nov-easy-e7f87ce0/

import java.util.Scanner;
class Solution
{
	public static void main(String args[])
	{
		try
		{
			Scanner in=new Scanner(System.in);
			int testCase=in.nextInt();
			while(testCase>0) {
			    String number=in.next();
			    int digit=0;
			    long stick = 0;
			    int len = number.length();
			    for(int i=0;i<len;i++) {
			        char c = number.charAt(i);
			        digit = (int)c-48;
			        switch(digit) {
			            case 0 : stick += 6;
			                    break;
			            case 1 : stick += 2;
			                    break;
			            case 2 : stick += 5;
			                    break;
			            case 3 : stick += 5;
			                    break;
			            case 4 : stick += 4;
			                    break;
			            case 5 : stick += 5;
			                    break;
			            case 6 : stick += 6;
			                    break;
			            case 7 : stick += 3;
			                    break;
			            case 8 : stick += 7;
			                    break;
			            case 9 : stick += 6;
			                    break;
			        }
			    }
			    if(stick%2!=0) {
			        System.out.print("7");
			        stick = (stick/2)-1;
			        while(stick>0) {
			            System.out.print("1");
			            stick--;
			        }
			    }
			    else {
			        stick /= 2;
			        while(stick>0) {
			            System.out.print("1");
			            stick--;
			        }
			    }
			    System.out.println();
			    testCase--;
			}
			
		}
        catch(ArithmeticException e) {
            System.out.println(e);
        }  
	}
}