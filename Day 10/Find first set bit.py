'''
Given an integer an N. The task is to print the position of first set bit found from right side in the binary representation of the number.

Input:
The first line of the input contains an integer T, denoting the number of test cases. Then T test cases follow. The only line of the each test case contains an integer N.

Output:
For each test case print in a single line an integer denoting the position of the first set bit found form right side of the binary representation of the number. If there is no set bit print "0".

Constraints:
1 <= T <= 200
0 <= N <= 106

Example:
Input:
2
18
12

Output:
2
3

Explanation:
Testcase 1: Binary representation of the 18 is 010010, the first set bit from the right side is at position 2.
'''

T=int(input())
while T:
    T-=1
    N=int(input())
    b=str(bin(N))
    c=0
    x=0
    for i in b[::-1]:
        if i=='1':
            x=1
            break
        else:
            
            c+=1
    if x==0:
        print(0)
    else:
        print(c+1)
