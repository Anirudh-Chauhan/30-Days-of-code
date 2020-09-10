/*
Ugly numbers are numbers whose only prime factors are 2, 3 or 5. The sequence 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, … shows the first 11 ugly numbers. By convention, 1 is included.
*/
#include<bits/stdc++.h>
using namespace std;

int uglynumber(int n){
    int ugly[n];
    int number,i=0,j=0,k=0;
    ugly[0]=1;
    int next_2=ugly[i]*2, next_3= ugly[j]*3, next_5 = ugly[i]*5;
    for(int x=1;x<n;x++){
     number = min({next_2,min({next_3,next_5})});
     ugly[x] = number;
     if (number == next_2 ){
        i++;
        next_2 = ugly[i]*2;
     }
     if (number == next_3 ){
        j++;
        next_3 = ugly[j]*3;
     }
     if (number == next_5 ){
        k++;
        next_5 = ugly[k]*5;
     }

    }
    return number;
}

int main(){
    int n;
    cin>>n;
    cout<<uglynumber(n);
    return 0;
}
