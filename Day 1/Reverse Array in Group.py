'''

Given an array arr[] of positive integers of size N. Reverse every sub-array of K group elements.

Input:
The first line of input contains a single integer T denoting the number of test cases. Then T test cases follow. Each test case consist of two lines of input. The first line of each test case consists of an integer N(size of array) and an integer K separated by a space. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each test case, print the modified array.

Constraints:
1 = T = 200
1 = N, K = 107
1 = A[i] = 1018

Example:
Input
2
5 3
1 2 3 4 5
6 2
10 20 30 40 50 60

Output
3 2 1 5 4
20 10 40 30 60 50

Solution =>

'''

import math
T=int(input())
while T:
    T-=1
    N,K=input().split(" ")
    N,K=int(N),int(K)
    A=list(map(int,input().split()))
    B=[]
    x,y=0,0
    for i in A:
        var=A[x:x+K]
        B.append(var[::-1])
        x=x+K
        y=y+1
        if y>=math.ceil(N/K):
            break
    for i in B:
        for j in i:
            print(j,end=' ')
            
    print()
        
