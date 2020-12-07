#include <iostream>
using namespace std;

int main(void) 
{
	int T;
	int A[100001];
	cin>>T;
	while(T--)
	{
	    int N,c=0,i,j;
	    cin>>N;
	    for(i=0;i<N;i++)
	    {
	        cin>>A[i];
	    }
	    for(i=0;i<N-1;i++)
	     { for(j=i+1;j<N;j++)
	         {if(A[i]==A[j])
	           {
	               A[i]+=A[i+1];
	               c++;
	           } 
	         }
	     }
	     cout<<c<<endl;
	}
	return 0;
}
