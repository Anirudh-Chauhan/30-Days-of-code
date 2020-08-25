'''
Given a string S consisting only '0's and '1's,  print the last index of the '1' present in it.

Input:
First line of the input contains the number of test cases T, T lines follow each containing a stream of characters.

Output:
Corresponding to every test case, output the last index of 1. If 1 is not present, print "-1" (without quotes).

Constraints:
1 <= T <= 110
1 <= |S| <= 106

Example:
Input:
2
00001
0
Output:
4
-1
'''

T=int(input())
while T:
    T-=1
    N=input()
    N=N[::-1]
    c,b=0,-1
    for i in range(len(N)):
        if N[i]=='1':
            c=1
            b=i
            break
    if c==0:
        print('-1')
    else:
        print(len(N)-b-1)
