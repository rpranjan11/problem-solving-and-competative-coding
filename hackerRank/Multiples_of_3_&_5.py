# Problem Statement Link : https://www.hackerrank.com/contests/projecteuler/challenges/euler001/

#!/bin/python3

import sys

testcase = int(input().strip())

def CalSum(number, divisor):
    quotient = int(number / divisor)
    # print('quotient : ', quotient)
    summation = divisor * ((quotient*(quotient+1))/2)
    # print(summation)
    return int(summation)
    
for a in range(testcase):
    number = int(input().strip())
    ans = CalSum(number-1, 3) + CalSum(number-1, 5) - CalSum(number-1, 15)
    print(ans)



