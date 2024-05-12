//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    int minSteps(int d) {
        int step=0;
        int sum=0;
   for(int i=0;i<=d;i++){
       step++;
       sum+=step;
       if(sum==d ){
           return step;
       }
     
       if(sum>d && ( sum-d)%2!=0){
           continue;
       }
       else if(sum>d && (sum-d)%2==0) {
           return step;
       }
       
       
   }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        Solution ob;
        cout << ob.minSteps(d) << "\n";
    }
    return 0;
}
// } Driver Code Ends