//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
  public:
    int replaceBit (int n, int k)
    {
    int p = (int)ceil(log(n) / log(2));
    
        if(k>p){
            return n;
        }
        if(n&(1<<(p-k))){
          return  n&~(1<<(p-k));
        }
        else{
            return n;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        Solution ob;
        cout <<ob.replaceBit (n, k) << endl;
    }
    return 0;
}


// } Driver Code Ends