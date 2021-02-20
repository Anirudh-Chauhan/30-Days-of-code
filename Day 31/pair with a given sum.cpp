#include<iostream>
using namespace std;

void pairsum(int a[],int x,int n){
    int c,d;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(a[i]+a[j]==x && i!=j){
                cout<<a[i]<<","<<a[j]<<" ";
            }
        }
    }
}

int main(){
int n;
cin>>n;
int a[n],x;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>x;

pairsum(a,x,n);

return 0;
}
