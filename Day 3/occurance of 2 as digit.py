'''

Count the number of 2s as digit in all numbers from 0 to n.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains the input integer n.

Output:
Print the count of the number of 2s as digit in all numbers from 0 to n.

Constraints:
1<=T<=100
1<=N<=10^5

Example:
Input:
2
22
100

Output:
6
20

SOLUTION=>
'''

def numberof2s(n):
    x = 0
    for i in str(n):
        if i == '2':
            
            x=x+1
        
    return x
    
def numberOf2sinRange(n):
    count=0
    for i in range(n+1):
        count=count + numberof2s(i)

    return count




if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        print(numberOf2sinRange(n))
