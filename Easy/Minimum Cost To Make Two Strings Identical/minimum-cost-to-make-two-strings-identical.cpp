//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {

  public:
    int findMinCost(string x, string y, int costX, int costY) {
     int n=x.length(),m=y.length();
        vector<vector<int>>v(n+1,vector<int>(m+1));
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(x[i-1]==y[j-1]) v[i][j]=1+v[i-1][j-1];
                else v[i][j]=max(v[i-1][j],v[i][j-1]);
            }
        }
        return (n-v[n][m])*costX+(m-v[n][m])*costY;
    
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin >> x >> y;

        int costX, costY;
        cin >> costX >> costY;

        Solution ob;
        cout << ob.findMinCost(x, y, costX, costY);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends