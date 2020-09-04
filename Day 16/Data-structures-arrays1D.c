/*

Given the size and the elements of array A, print all the elements in reverse order.

Input:
First line of input contains, N - size of the array.
Following N lines, each contains one integer, i{th} element of the array i.e. A[i].

Output:
Print all the elements of the array in reverse order, each element in a new line.

Constraints:

SAMPLE INPUT 
5
4
12
7
15
9
SAMPLE OUTPUT 
9
15
7
12
4

*/


#include<stdio.h>
int main(){
	int N,i;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	for(i=N-1;i>=0;i--){
		printf("%d\n",a[i]);
	}
	return 0;
}