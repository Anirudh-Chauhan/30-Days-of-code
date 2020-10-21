// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    int a[n],b[n];
	    int j=0,k=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            a[j++]=arr[i];
	        }else{
	            b[k++]=arr[i];
	        }
	    }
	    int x=j,y=k;
	    j=0,k=0;
	    for(int i=0;i<n;i++){
	        if(i%2==0)
	            arr[i] = b[k++];
	        else if(i%2!=0 && j!=x )
	                arr[i] = a[j++];
	             else if()
	                arr[i] = b[k++];
	    }

	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code End