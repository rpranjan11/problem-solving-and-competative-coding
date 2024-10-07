// Problem Statement Link : https://www.hackerrank.com/challenges/time-conversion/

import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'timeConversion' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String timeConversion(String s) {
    // Write your code here 12:00:01PM
        StringBuilder time = new StringBuilder("");
        if(s.charAt(8) == 'A') {
            if(s.charAt(0) == '1' && s.charAt(1) == '2') {
                time.append("00:");
            }
            else {
                time.append(s.substring(0, 3));
            }
            time.append(s.substring(3, 8));
        }
        else {
            if(s.charAt(0) == '0' && s.charAt(1) == '1') {
                time.append("13:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '2') {
                time.append("14:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '3') {
                time.append("15:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '4') {
                time.append("16:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '5') {
                time.append("17:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '6') {
                time.append("18:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '7') {
                time.append("19:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '8') {
                time.append("20:");
            }else if(s.charAt(0) == '0' && s.charAt(1) == '9') {
                time.append("21:");
            }else if(s.charAt(0) == '1' && s.charAt(1) == '0') {
                time.append("22:");
            }else if(s.charAt(0) == '1' && s.charAt(1) == '1') {
                time.append("23:");
            }
            else {
                time.append(s.substring(0, 3));
            }
            time.append(s.substring(3, 8));
        }
        
        return time.toString();
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.timeConversion(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
