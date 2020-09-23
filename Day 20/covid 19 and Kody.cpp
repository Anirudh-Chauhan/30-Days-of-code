/*
COVID-19 AND KODY
Kody was tired of being stuck in the lockdown, therefore he decided to play Among Us with his friends, for the first game, his friend became an impostor, his friend sabotaged them in the Reactor Meltdown area, now he gives Kody a two random numbers A and B, and ask him to check whether they both are prime or not. If both of the numbers A and B are prime then Kody will return the XOR value of both the numbers, if even one of them is not prime, then Kody will return the AND(operator) value of both the numbers. That is, if A and B both are Prime, then Output A XOR B. Otherwise even if one of them is not prime, then output A AND B.

INPUT FORMAT:

There will be N testcases, each followed by two Integers A and B. The first integer will be N. Then N lines folow A and B. OUTPUT FORMAT: Each line will contain only one integer i.e A ^ B or A & B, depending on the condition.

CONSTRAINTS:

1 <= N <= 100

1 <= A <= 100000

1 <= B <= 100000

SAMPLE INPUT 
4
7 9
19 11
25 5
8 32
SAMPLE OUTPUT 
1
24
1
0
*/
#include<bits/stdc++.h>
using namespace std;

int isprime(long p){
    long i=0;
    int flag=1;
    //for(i=0;i<n;i++){
    cout<<p<<","<<i;
    while(i<p){
        cout<<".";
        if (p%i==0){
            flag=0;
            break;
        }
        else{
            flag=1;
        }
        i++;
    }
    if(flag==1){return 3;}
    else{return 2;}
}
/*
long check_it(long a,long b){
    cout<<"a="<<a;
    cout<<"b="<<b;
    int x = isprime(a);
    int y = isprime(b);
    if( x==3 && y==3){
        long c = a^b;
        cout<<"xor";
        return c;
        //cout<<c<<endl;
    }
    else{
        long c=a&b;
        cout<<"and";
        return c;
        //cout<<c<<endl;
    }

}
*/
int main(){
    long N,a,b;
    cin>>N;
    for(long i=0;i<N;i++){
        cin>>a>>b;
        cout<<"a="<<a;
    cout<<"b="<<b;
    int x = isprime(a);
    int y = isprime(b);
    if( x==3 && y==3){
        long c = a^b;
        cout<<"xor";
        //return c;
    }
    else{
        long c=a&b;
        cout<<"and";
        cout<<c<<endl;
    }
        //cout<<check_it(a,b)<<endl;
    }

    return 0;
}
