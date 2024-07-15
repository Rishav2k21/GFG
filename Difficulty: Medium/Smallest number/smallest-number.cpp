//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
        
        int n = 1;
        
        for(int i =1; i<d; i++){
            n*=10;
        }
        
        int ndash = n*10;
        
        for(int i=n; i<ndash; i++){
            int sum = 0;
            int x = i;
            
            while(x>0){
                sum+=(x%10);
                x = x/10;
                if(sum==s){
                    return to_string(i);
                    break;
                }
            }
        }
        return to_string(-1);
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends