'''
PROBLEM STATEMENTPoints: 10
No problem statement.

Find the logic from the given sample input/output.

And answer Q queries.

Constraints :

1 <= Value <= 100000
1<=nunber of query<=10000

SAMPLE INPUT 
8
10
30
45
9
69
77
127
150
SAMPLE OUTPUT 
8
42
33
4
27
19
1
222
'''

T=int(input())
while(T):
    T-=1    
    n=int(input())
    sum_=0

    for i in range(1,n):
        if n%i==0:
            sum_=sum_ + i
    print(sum_)