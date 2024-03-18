//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
   
class Solution{
public:
    int isBitSet(int N){
       int numBits = (int) (log(N) / log(2)) + 1;
       int p=0;
      p= p|(1<<numBits);
       p--;
       if(p==N) return 1;
       return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends