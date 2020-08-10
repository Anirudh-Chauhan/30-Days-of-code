/*
Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15

*/


#include <stdio.h>

int main() {
	int T,N,K,i;
	scanf("%d\n",&T);
	while(T--)
	{
	    scanf("%d %d\n",&N,&K);
	    int A[N];
	    for(i=0;i<N;i++)
	    {
	        scanf("%d ",&A[i]);
	    }
	    i=0;
	    int sum_=0,j=0,x=0;
        while(i<N)
        { 
            if(sum_+A[i]<=K)
            {
                sum_+=A[i];
            }
            else
            {
                sum_+=A[i];
                while(sum_>K)
                {
                    sum_-=A[x];
                    x++;
                }
            }
            if(sum_==K)
            {
                printf("%d %d",x+1,i+1);
                j=1;
                break;
            }
            i++;
        }
        if(j==0) printf("-1");
        printf("\n");
	}
	return 0;
}