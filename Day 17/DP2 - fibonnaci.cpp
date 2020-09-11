#include<iostream>
using namespace std;

int fib(int n){
    int f[n+2];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i] = f[i-1] + f[i-2];
    }
    for(int i=0 ;i<n;i++){
        cout<<f[i]<<" ";
    }
    return f[n];
}

int main(){
    int n;
    cin>>n;
    cout<<endl<<fib(n);
return 0;
}
