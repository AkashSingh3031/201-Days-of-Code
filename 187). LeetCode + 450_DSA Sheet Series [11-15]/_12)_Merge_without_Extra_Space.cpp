// { Driver Code Starts.

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int i=n-1,j=0;
    	  for(;i>=0 &&j<m;i--,j++)
    	  {
    	      if(arr1[i]>=arr2[j])
    	      {
    	           swap(arr1[i],arr2[j]);
    
    	      }
    	      else {
    	          break;
    	      }
    	  }
    	      sort(arr1,arr1+n);
    	      sort(arr2,arr2+m);
    	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++) {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++) {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++) {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++) {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends