//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  char low=0, high = str.size()-1;
  while(low<high){
      // Swap 
      char temp = str[low];
      str[low] = str[high];
      str[high] = temp;
      low++;
      high--;
  }
  return str;
}