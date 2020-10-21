#include <iostream>
using namespace std;

int main() {
	int T,N;
	cin>>T;
	while(T--){
	    cin>>N;
	    int A[N],B[N];
	    for(int i=0;i<N;i++){
	        cin>>A[i];
	    }
	    for(int i=0;i<N;i++){
	        B[i]=-1;
	    }
	    for(int i=0;i<N;i++){
	        int x=A[i];
	        if(x>=0){
	            B[x] = x;
	        } else{
	            B[x] = -1; 
	        }
	    }
	    for(int i=0;i<N;i++){
	        cout<<B[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}