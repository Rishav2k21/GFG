//{ Driver Code Starts


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution {
public:
   int f(int node , vector<vector<int>> &adj, vector<int> &vis, int &cnt){
       int sum=1;
         vis[node]=1;
       for(auto it:adj[node]){
           if(!vis[it]){
          sum+= f(it,adj,vis,cnt);
         
           }
       }
       if(sum%2==0 && node!=1) cnt++;
       return sum;
      
   }
	int minimumEdgeRemove(int n, vector<vector<int>>edges){
	    
	   
	    vector<vector<int>>adj(n+1,vector<int>());
	    for(auto it:edges){
	        adj[it[0]].push_back(it[1]);
	        adj[it[1]].push_back(it[0]);
	        
	    }
	    int cnt=0;
	    vector<int>vis(n+1,0);
	    f(1,adj,vis,cnt);
	    return cnt;
	    
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>edges;
		for(int i = 0; i < n-1; i++){
			int x, y;
			cin >> x >> y;
			edges.push_back({x,y});
		}
		Solution obj;
		int ans = obj.minimumEdgeRemove(n, edges);
		cout << ans <<"\n";
	}
	return 0;
}

// } Driver Code Ends