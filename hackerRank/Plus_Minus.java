// Problem Statement Link : https://www.hackerrank.com/challenges/plus-minus/

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
     * Complete the 'plusMinus' function below.
     *
     * The function accepts INTEGER_ARRAY arr as parameter.
     */

    public static void plusMinus(List<Integer> arr) {
    // Write your code here
        int n = 0;
        double positive = 0, negative = 0, zero = 0;
        for (Integer integer : arr) {
            n++;
            if(integer == 0)
                zero++;
            else if(integer < 0)
                negative++;
            else
                positive++;
        }
        System.out.println(String.format("%.6f", positive / n));
        System.out.println(String.format("%.6f", negative / n));
        System.out.println(String.format("%.6f", zero / n));
    }

}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        Result.plusMinus(arr);

        bufferedReader.close();
    }
}
