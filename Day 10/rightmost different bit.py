'''
Given two numbers M and N. The task is to find the position of rightmost different bit in binary representation of numbers.

Input:
The input line contains T, denoting the number of testcases. Each testcase follows. First line of each testcase contains two space separated integers M and N.

Output:
For each testcase in new line, print the position of rightmost different bit in binary representation of numbers. If both M and N are same then print -1 in this case.

Constraints:
1 <= T <= 100
1 <= M <= 103
1 <= N <= 103

Example:
Input:
2
11 9
52 4

Output:
2
5

Explanation:
Tescase 1: Binary representaion of the given numbers are: 1011 and 1001, 2nd bit from right is different.
'''
T=int(input())
while T:
    T-=1
    N,M=input().split(' ')
    N,M=int(N),int(M)
    a,b=str(bin(N)),str(bin(M))
    a,b=a[2:],b[2:]
    s='0'
    p=len(a)
    q=len(b)
    if p>q:
        s=s*(p-q)
        b=s+b
    if q>p:
        s=s*(q-p)
        a=s+a
    a=a[::-1]
    b=b[::-1]
    #print(a,b)
    s='0'
    p=len(a)
    q=len(b)
    if p>q:
        s=s*(p-q)
        b=s+b
    if q>p:
        s=s*(q-p)
        a=s+a
    x,c=0,0
    i,j=0,0
    while(i<len(a) and j<len(b)):
        if a[i]!=b[j]:
            x=1
            #print(a[i],b[j])
            #print(a,b)
            break
        else:
            c+=1
        i+=1
        j+=1
    if x==1:
        print(c+1)
    else:
        print(-1)
