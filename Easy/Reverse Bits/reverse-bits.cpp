//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long n) {
      
     long long  int ans=0;
      long long int p=31;
      for(long long int i=0;i<32;i++){
          if(n&(1<<i)){
              ans+= (1L<<p);
          }
          p--;
      }
      return abs(ans);
      
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends