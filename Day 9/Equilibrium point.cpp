/*

Given an array A of N positive numbers. The task is to find the position where equilibrium first occurs in the array. Equilibrium position in an array is a position such that the sum of elements before it is equal to the sum of elements after it.

Input:
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. First line of each test case contains an integer N denoting the size of the array. Then in the next line are N space separated values of the array A.

Output:
For each test case in a new  line print the position at which the elements are at equilibrium if no equilibrium point exists print -1.

Constraints:
1 <= T <= 100
1 <= N <= 106
1 <= Ai <= 108

Example:
Input:
2
1
1
5
1 3 5 2 2

Output:
1
3

Explanation:
Testcase 1: Since its the only element hence its the only equilibrium point.
Testcase 2: For second test case equilibrium point is at position 3 as elements below it (1+3) = elements after it (2+2).

*/

#include <iostream>
using namespace std;

int find_equi(int N,int A[]){
    int sum=0,lsum=0;
    for(int i=0; i<N;i++){
        sum+=A[i];
    }
    int i=0;
    while(i<N){
        sum=sum-A[i];
        if(sum==lsum){
            return i+1;
        }
        lsum+=A[i];
        i++;
    }    
    return -1;
}

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    int res= find_equi(N,A);
	    if(res==0){
	        cout<<-1<<endl;
	    }else{
	       cout<<res<<endl;
	    }	
    }
	return 0;
}