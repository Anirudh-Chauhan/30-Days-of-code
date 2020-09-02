#include<iostream>
using namespace std;
#define M 10000007
int main()
{
    long long final[102][102];
    int i=0,j=0;
    for(i=0;i<102;i++){
    final[i][0]=1;
    final[i][i]=1;
    }
    
    for(i=1;i<102;i++)
        for(j=1;j<102;j++)
            if (i!=j)
                final[i][j]=(final[i-1][j]%M+final[i-1][j-1]%M)%M;
    
    
    int n,r;
    cin>>n>>r;
    if(n<r)cout<<("-1\n");
    else{
    n-=r;
    cout<<(final[n+r-1][r-1]%M);}
    return 0;
}
