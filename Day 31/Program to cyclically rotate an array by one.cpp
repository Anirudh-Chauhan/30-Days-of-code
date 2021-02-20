#include<iostream>
using namespace std;

void rotatecyclic(int a[],int d,int n){
    cout<<"BEFORE :";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }
    cout<<endl;
    int x;
    for(int i=0;i<d;i++){
        x=a[n-1];
        for(int j=n-1;j>0;j--){
            a[j]=a[j-1];
        }
        a[0]=x;
    }
    cout<<"AFTER  :";
    for(int i=0;i<n;i++){
        cout<<" "<<a[i];
    }

}

int main()
{
    int n;
    cin>>n;
    int a[n],d;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d;

    rotatecyclic(a,d,n);

    return 0;
}
