#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the miniMaxSum function below.
def miniMaxSum(arr):
    min_sum,max_sum=0,0
    arr=sorted(arr)
    sum_total = []
    for i in range(len(arr)):
        a=arr[:i]
        b=arr[i:]
        if len(a)==4:
            sum_total.append(sum(a))
        if len(b)==4:
            sum_total.append(sum(b))
    #print(sum_total)
    print( min(sum_total),max(sum_total))


if __name__ == '__main__':
    arr = list(map(int, input().rstrip().split()))

    miniMaxSum(arr)
