#!/bin/python3

import os
import sys

def solve(arr, i, j):
    if i == j:
        return 0
    else:
        k = i
        suM = sum(arr[i:j + 1])
        left = arr[i]
        while (left << 1) != suM and i + 1 < j:
            i += 1
            left += arr[i]
        if (left << 1) == suM and i < j:
            return 1 + max(solve(arr, k, i), solve(arr, i + 1, j))
        else:
            return 0

        
def arraySplitting(arr):
    n=len(arr)
    if(sum(arr) == 0):
        return (n-1)
    else:
        return solve(arr, 0, n - 1)



if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    t = int(input())

    for t_itr in range(t):
        arr_count = int(input())

        arr = list(map(int, input().rstrip().split()))

        result = arraySplitting(arr)

        fptr.write(str(result) + '\n')

    fptr.close()
