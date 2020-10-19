#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the superReducedString function below.
def superReducedString(s):
    s=list(s)
    s.append('end')
    i=0
    while s[i]!='end':
        if s[i+1]==s[i]:
            print(s[i],s[i+1])
            s.pop(i)
            s.pop(i)
            i=0
            print('yes')
        else:
            i+=1
        print("i=",i)
        if len(s)==1:
                return 'Empty String'
    print(s)
    res=''
    for i in s:
        if i!='end':
            res+=i
    return res
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = superReducedString(s)

    fptr.write(result + '\n')

    fptr.close()
