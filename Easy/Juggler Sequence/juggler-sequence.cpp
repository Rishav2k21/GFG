//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int p;
    void find(int n,vector<int>&v){
        
       if(n<=1){
    
           return ;
       }
       if(n%2==0){
           p=pow(n,1.0/2.0);
       }
       if(n%2!=0){
           p=pow(n,3.0/2.0);
       }
       
       v.push_back(p);
       find(p,v);
    }
    vector<int> jugglerSequence(int n) {
       vector<int>v;
       v.push_back(n);
      find(n,v);
       
       
       return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends