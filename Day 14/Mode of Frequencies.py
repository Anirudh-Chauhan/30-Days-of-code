'''
Chef opted for Bio-Statistics as an Open-Elective course in his university, but soon got bored, and decided to text his friends during lectures. The instructor caught Chef, and decided to punish him, by giving him a special assignment.

There are N numbers in a list A=A1,A2,�,AN. Chef needs to find the mode of the frequencies of the numbers. If there are multiple modal values, report the smallest one. In other words, find the frequency of all the numbers, and then find the frequency which has the highest frequency. If multiple such frequencies exist, report the smallest (non-zero) one.

More formally, for every v such that there exists at least one i such that Ai=v, find the number of j such that Aj=v, and call that the frequency of v, denoted by freq(v). Then find the value w such that freq(v)=w for the most number of vs considered in the previous step. If there are multiple values w which satisfy this, output the smallest among them.

As you are one of Chef's friends, help him complete the assignment.

Input:
The first line contains an integer T, the number of test cases.
The first line of each test case contains an integer N, the number of values in Chef's assignment.
The second line of each test case contains N space-separated integers, Ai, denoting the values in Chef's assignment.
Output:
For each test case, print the mode of the frequencies of the numbers, in a new line.

Constraints
1=T=100
1=N=10000
1=Ai=10
Subtasks
30 points : 1=N=100
70 points : Original constraints.
Sample Input:
2
8
5 9 2 9 7 2 5 3
9
5 9 2 9 7 2 5 3 1
Sample Output:
2
1
Explanation:
Test case 1: (2, 9 and 5) have frequency 2, while (3 and 7) have frequency 1. Three numbers have frequency 2, while 2 numbers have frequency 1. Thus, the mode of the frequencies is 2.

Test case 2: (2, 9 and 5) have frequency 2, while (3, 1 and 7) have frequency 1. Three numbers have frequency 2, and 3 numbers have frequency 1. Since there are two modal values 1 and 2, we report the smaller one: 1.
'''

def get_key(val): 
    for key, value in z.items(): 
         if val == value: 
             return key

from statistics import mode

T=int(input())
while T:
    T-=1
    N=int(input())
    arr=list(map(int,input().split(' ')))
    #print(arr)
    frequency=[]
    unique_list = [] 
    for x in arr: 
        if x not in unique_list: 
            unique_list.append(x)
            frequency.append(arr.count(x))
    #print(frequency)
    z={}
    unique_=[]
    for i in frequency: 
        if i not in unique_: 
            unique_.append(i)
            z[i]=frequency.count(i)
    #print(z)
    z=mode(frequency)
    '''
    max_value = max(z.values()) 
    min_value = min(z.values())
    if max_value==min_value:
        print(min(z.keys()))
    else:
        print(get_key(max_value))
    '''
        
    
    
