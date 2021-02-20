#include<iostream>
using namespace std;

void rotateit(int a[],int d,int n){
    cout<<"BEFORE :";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    int x,y;
    for(int i=0;i<d;i++){
        x=a[0];
        for(int j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=x;
    }
    cout<<"AFTER  :";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
}

int main(){
int n;
cin>>n;
int a[n],d;
for(int i=0;i<n;i++){
    cin>>a[i];
}
cin>>d;

rotateit(a,d,n);

return 0;
}
