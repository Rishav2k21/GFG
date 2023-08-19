//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


class Solution{
    void dfs(vector<int>adjj[] , vector<bool>&visited , int node )
    {
        visited[node]=true;
        
        for(auto it:adjj[node]){
            if(!visited[it]){
                dfs(adjj,visited,it);
            }
        }
    }
public:

    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int count=0;
        
        vector<bool>visited(V,false);
        vector<int>adjj[V];
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j]==1 && i!=j){
                    adjj[i].push_back(j);
                    adjj[j].push_back(i);
                    
                }
            }
        }
        for(int i=0 ; i<V ; i++)
        {
            if(visited[i]==false)
            {
                dfs( adjj , visited , i );
                count++;
            }
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends