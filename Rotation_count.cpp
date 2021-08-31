
// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n)
	{
	    // code here
	   int pivot=n-1;
	    int low=0;
	    int high=n-1;
	    int mid;
	    
	    while(low<=high)
	    {
	        mid=low+(high-low)/2;
	        
	        if(mid<n-1 && arr[mid]>arr[mid+1])
	        {
	            pivot=mid;
	            break;
	            
	        }
	        
	        else if(mid>0 && arr[mid]<arr[mid-1])
	        {
	            pivot=mid-1;
	            break;
	        }
	        
	        else if(arr[mid]<arr[0])
	        high=mid-1;
	        
	        else if(arr[mid]>=arr[0])
	        low=mid+1;
	    }
	    
	    
	    if(pivot==n-1)
	    return 0;
	    
	    return pivot+1;
	    
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
