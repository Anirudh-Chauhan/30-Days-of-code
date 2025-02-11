'''

Given an array of distinct integers. The task is to count all the triplets such that sum of two elements equals the third element.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. First line of each test case contains an Integer N denoting size of array and the second line contains N space separated elements.

Output:
For each test case, print the count of all triplets, in new line. If no such triplets can form, print "-1".

Constraints:
1 <= T <= 100
3 <= N <= 105
1 <= A[i] <= 106

Example:
Input:
2
4
1 5 3 2
3
3 2 7
Output:
2
-1

Explanation:
Testcase 1: There are 2 triplets: 1 + 2 = 3 and 3 +2 = 5
SOLUTION=>

'''

T=int(input())

while T:
    T-=1
    N=int(input())
    c=0
    A=list(map(int,input().split()))
    A.sort()
    A_set = set(A)
    #print(A_set)
    max_=A[-1]
    for i in range(N-1):
        for j in range(i+1,N-1):
            s = A[i]+A[j]
            if s>max_:
                break
            elif s in A_set:
                c+=1
        
        
        
    if c==0:
        print('-1')
    else:
        print(c)
    # 1 2 3 4 5 6 7 9 10 12
