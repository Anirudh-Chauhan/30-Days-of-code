#include <iostream>
using namespace std;

int main() 
{
	int T;long A[200005];
	cin>>T;
	while(T--)
	{
	    int N,a,b,i=0,d=0,e=0;
	    cin>>N>>a>>b;
	    for(i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(i=0;i<N;i++)
	    {
	        if(A[i]%a==0)
	        {
	            d++;
	            A[i]=0;
	        }else if(A[i]%b==0)
	               {
	                  e++;
	                  A[i]=0;
	               }
	    }
	    if(d==e)
	    {
	        cout<<"ALICE\n";
	    }else if(d>e)
	           {
	               cout<<"BOB\n";
	           }else{cout<<"ALICE\n";}
	}
	return 0;
}
