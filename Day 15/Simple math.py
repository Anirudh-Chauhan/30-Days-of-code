'''
Find the number of ways of distributing N objects into R groups such that each group gets 1 or more objects.

Input:
The one and only line of input contains two numbers separated by a single space, which are N and R respectively.

Output:
The corresponding answer modulo 10000007 in a single line and if no answer exist then print "-1".

Constraints:
1 <= N <= 100
1 <= R <= 100

SAMPLE INPUT 
4 2
SAMPLE OUTPUT 
3
Explanation
Let the 2 groups be A and B respectively. Case 1: A gets 1 object and B gets 3 Case 2: A gets 2 objects and B gets 2 Case 3: A gets 3 objects and B gets 1

Time Limit: 1.0 sec(s) for each input file.
'''
N,R = map(int,input().split(' '))
ans = 1
 
def fact(n): 
  
    res = 1
      
    for i in range(2, n+1): 
        res = res * i 
          
    return res 

def nCr(n, r): 
  
    return (fact(n) / ( fact(r) * fact(n - r) )) 
  

x= N+R-1
y=R-1
print(int(nCr(x,y)-2))
