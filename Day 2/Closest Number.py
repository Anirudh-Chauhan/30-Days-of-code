'''

Given an array of sorted integers. The task is to find the closest value to the given number in array. Array may contain duplicate values.

Note: If the difference is same for two values print the value which is greater than the given number.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains two integers N & K and the second line contains N space separated array elements.

Output:
For each test case, print the closest number in new line.

Constraints:
1<=T<=100
1<=N<=105
1<=K<=105
1<=A[i]<=105

Example:
Input:
2
4 4
1 3 6 7
7 4
1 2 3 5 6 8 9

Output:
3
5

SOLUTION =>
'''

T=int(input())
while T:
    T-=1
    N,K=input().split(' ')
    N,K=int(N),int(K)
    A=list(map(int,input().split()))
    j=0
    if K>=A[N-1]:
        print(A[N-1])
        j=1
    elif K<A[0]:
        print(A[0])
        j=1
    if j==0:
        x,y=0,0
        for i in range(len(A)-1):
            if K>=A[i] and K<A[i+1]:
                x=i
                break
        if (K-A[x])<(A[x+1]-K):
            print(A[x])
        else:
            print(A[x+1])
