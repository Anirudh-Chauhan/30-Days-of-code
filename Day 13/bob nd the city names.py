'''
PROBLEM STATEMENTPoints: 30
Bob is travelling from one city to another. In his way, he sees many other cities pass by. What he does instead of learning the full names of the cities, he learns just the first character of the cities. For example, if he passes by "bhopal", he will just remember the 'b'.

Given the list of N cities that come in his way, print "YES" or "NO" depending on if he is able to remember all the cities distinctly or not.

Note: City name consists of small English alphabets only.

Input and Output:
First line contains T, the number of testcases. Each testcase consists of N, the number of cities. Next N lines contain the names of the cities.
For each testcase, print "YES" or "NO" (quotes for clarity).

Constraints:
1 = T = 100
1 = N = 1000
1 = Length of each city name = 10

SAMPLE INPUT 
2
2
bhopal
delhi
3
bhopal
delhi
dehradun
SAMPLE OUTPUT 
YES
NO

'''


while T:
    T=T-1
    N=int(input())
    a=[]
    x=[]
    z=1
    for i in range(N):  
        x.append(input())

    for i in x:
        if i[0] in a:
            z=0
            break
        else:    
            a.append(i[0])
    if z==1:
        print('YES')
    else:
        print('NO')