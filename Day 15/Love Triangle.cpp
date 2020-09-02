/*
Two boys, Venky and Sagar, are at war over a girl, Riu. Driven by their feelings, they decided to confess to Riu. Since both of them were equally dumb, Riu decided that she would go out with that boy who would successfully find the pattern and thus prove that he is less dumb.

Read input until end of file.

Given : 0<=N<=10^18

SAMPLE INPUT 
1
2
3
10
100
SAMPLE OUTPUT 
1
2
3
11
121

*/
#include<iostream>
using namespace std;

long ans(long N){
    if(N<9){
            return N;
        }
        else{
            return N%9 + 10*ans(N/9);
        }
}

int main(){
    long N;
    while(cin>>N){
        cout<<ans(N)<<endl;
    }
    return 0;
}
