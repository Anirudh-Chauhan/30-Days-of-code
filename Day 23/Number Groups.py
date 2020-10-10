#!/bin/python3

import math
import os
import random
import re
import sys

def getNthoddnumber(n):
    return 2*n-1

# Complete the sumOfGroup function below.
def sumOfGroup(k):
    # Return the sum of the elements of the k'th group.
    num = (k*(k-1))+1
    suM=0
    for _ in range(k):
        suM += num
        num += 2
    return suM
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    k = int(input())

    answer = sumOfGroup(k)

    fptr.write(str(answer) + '\n')

    fptr.close()
