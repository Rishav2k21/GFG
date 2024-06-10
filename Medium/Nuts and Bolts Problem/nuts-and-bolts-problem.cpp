//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    void matchPairs(int n, char nuts[], char bolts[]) {
      map<char,int>m;
      m['!']=0;
       m['#']=0;
       m['$']=0;
       m['%']=0;
        m['&']=0;
         m['*']=0;
          m['?']=0;
           m['@']=0;
            m['^']=0;
            
     for(int i=0;i<n;i++){
         m[nuts[i]]++; 
      }
      int k=0;
      int p=0;
      for(auto i:m){
          if(i.second!=0){
          nuts[k++]=i.first;
          bolts[p++]=i.first;
          }
      }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(n, nuts, bolts);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends