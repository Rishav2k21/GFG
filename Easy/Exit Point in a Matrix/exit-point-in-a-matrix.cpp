//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> FindExitPoint(int n, int m, vector<vector<int>>& matrix) {
         vector<int> curr={0,0},prev; 
        vector<vector<int>> dir={{0,1},{1,0},{0,-1},{-1,0}}; 
        int direction=0;  
        while(curr[0]<n && curr[0]>=0 && curr[1]<m && curr[1]>=0){  
            prev=curr;     
            if(matrix[curr[0]][curr[1]]==1){ 
                direction=(direction+1)%4;       
                matrix[curr[0]][curr[1]]=0;   
            }
            curr[0]+=dir[direction][0];    
            curr[1]+=dir[direction][1];
        }    
        return prev;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        vector<int> ans = obj.FindExitPoint(n, m, matrix);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends