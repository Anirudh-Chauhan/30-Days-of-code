'''
Given an unsorted array arr[] of size N, rotate it by D elements (clockwise). 

Input:
The first line of the input contains T denoting the number of testcases. First line of each test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

Output:
For each testcase, in a new line, output the rotated array.

Constraints:
1 <= T <= 200
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105

Example:
Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20

Output:
3 4 5 1 2
8 10 12 14 16 18 20 2 4 6

Solution =>
'''

T=int(input())
while T:
    T-=1
    N,D=input().split(' ')
    N,D=int(N),int(D)
    A=list(map(int,input().split()))
    X=A[:D]
    Y=A[D:]
    Z=Y+X
    for i in Z:
        print(i,end=' ')
    print()    
