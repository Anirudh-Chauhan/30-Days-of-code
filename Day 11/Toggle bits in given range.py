'''
Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit. A toggle operation flips a bit 0 to 1 and a bit 1 to 0.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains three space separated integers N, L and R.

Output:
For each test case , print the number obtained by toggling bits from the rightmost Lth bit to the rightmost Rth bit in binary representation of N.

Constraints:
1<=T<=100
1<=N<=1000
1<=L<=R
L<=R<= Number of bits(N)

Example:
Input:
2
17 2 3
50 2 5
Output:
23
44
'''


T=int(input())
while T:
    T-=1
    N,L,R=input().split(' ')
    N,L,R=str(bin(int(N))).replace("0b",""),int(L),int(R)
    #print('before = ',N)
    N=N[::-1]
    for i in range(L-1,R):
        if N[i]=='1':
            N = N[:i] + '0' + N[i+1:]
        else:
            N = N[:i] + '1' + N[i+1:]
    
    N=N[::-1]
    #print('After = ',N)
    print(int(N,2))
    
