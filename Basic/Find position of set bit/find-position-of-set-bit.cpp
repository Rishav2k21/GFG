//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int N) {
        int pos=0;
        int cnt=0;
       for(int i=0;i<32;i++){
           if(N& (1<<i)){
               cnt++;
               pos=i+1;
           }
       }
       if(cnt==1){
           return pos;
       }
     return -1;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends