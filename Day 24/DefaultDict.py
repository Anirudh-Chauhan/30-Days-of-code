'''
The defaultdict tool is a container in the collections class of Python. It's similar to the usual dictionary (dict) container, but the only difference is that a defaultdict will have a default value if that key has not been set yet. If you didn't use a defaultdict you'd have to check to see if that key exists, and if it doesn't, set it to what you want.
For example:
from collections import defaultdict
d = defaultdict(list)
d['python'].append("awesome")
d['something-else'].append("not relevant")
d['python'].append("language")
for i in d.items():
    print i
This prints:
('python', ['awesome', 'language'])
('something-else', ['not relevant'])
In this challenge, you will be given  integers,  and . There are  words, which might repeat, in word group . There are words belonging to word group . For each  words, check whether the word has appeared in group  or not. Print the indices of each occurrence of  in group . If it does not appear, print .
Constraints


Input Format
The first line contains integers,  and  separated by a space.
The next  lines contains the words belonging to group .
The next  lines contains the words belonging to group .
Output Format
Output  lines.
The  line should contain the -indexed positions of the occurrences of the  word separated by spaces.
Sample Input
5 2
a
a
b
a
b
a
b
Sample Output
1 2 4
3 5
Explanation
'a' appeared  times in positions ,  and .
'b' appeared  times in positions  and .
In the sample problem, if 'c' also appeared in word group , you would print .

'''
from collections import defaultdict
n,m = map(int,input().split())

d = defaultdict(list)
l1=[]

for i in range(0,n):
    d[input()].append(i+1) 

for i in range(0,m):
    l1=l1+[input()]  

for i in l1: 
    if i in d:
        print (" ".join( map(str,d[i]) ))
    else:
        print (-1)

