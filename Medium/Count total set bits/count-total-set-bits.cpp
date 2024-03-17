//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
    int findhighsq(int n){
         int c=0;
     while((1<<c )<=n){
         c++;
     }
     return c-1;
    }
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    
    int countSetBits(int n)
    { 
      int p=findhighsq(n);
      if(n==0)return 0;
      int ans= p*(1<<(p-1)) + (n-(1<<p)+1) + countSetBits(n-(1<<p));
      return ans;
     }
};


//{ Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       Solution ob;
	       cout << ob.countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}

// } Driver Code Ends