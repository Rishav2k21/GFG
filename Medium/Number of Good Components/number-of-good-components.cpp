//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Matrix {
  public:
    template <class T>
    static void input(vector<vector<T>> &A, int n, int m) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                scanf("%d ", &A[i][j]);
            }
        }
    }

    template <class T>
    static void print(vector<vector<T>> &A) {
        for (int i = 0; i < A.size(); i++) {
            for (int j = 0; j < A[i].size(); j++) {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
    }
};


// } Driver Code Ends

class Solution {
  public:
  void dfs(vector<vector<int>> &adj, int i, vector<int> &visited, vector<int> &temp){
       
      temp.push_back(i);
      visited[i]++;
      for(auto &it:adj[i]){
          if(visited[it]==0){
              dfs(adj,it,visited,temp);
          }
          
      }
      return ;
      
      
  }
    int findNumberOfGoodComponent(int e, int v, vector<vector<int>> &edges) {
        vector<vector<int>>adj(v+1,vector<int>{});
        for(auto &e:edges){
            int a=e[0];
            int b=e[1];
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        vector<int>visited(v+1,0);
        int sum=0;
        for(int i=1;i<=v;i++){
            if(visited[i]==0){
                vector<int>temp;
                dfs(adj,i,visited,temp);
                int flag=1;
                for(auto it:temp){
                    if(adj[it].size()!=temp.size()-1) {
                        flag=0;
                        break;
                    }
                }
                 if(flag){
                    sum++;
                }
               
            }
            
        }
        return sum;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int e;
        scanf("%d", &e);

        int v;
        scanf("%d", &v);

        vector<vector<int>> edges(e, vector<int>(2));
        Matrix::input(edges, e, 2);

        Solution obj;
        int res = obj.findNumberOfGoodComponent(e, v, edges);

        cout << res << endl;
    }
}

// } Driver Code Ends