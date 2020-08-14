#Given an integer x. The task is to find the square root of x. If x is not a perfect square, then return floor(vx).

#SOLUTION


def floorSqrt(x): 
    return math.floor(math.sqrt(x))



#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math



def main():
        T=int(input())
        while(T>0):
            
            x=int(input())
            
            print(floorSqrt(x))
            
            T-=1


if __name__ == "__main__":
    main()