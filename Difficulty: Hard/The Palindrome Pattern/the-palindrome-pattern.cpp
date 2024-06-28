//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    public:
      string pattern(vector<vector<int>> &arr) {
        // Code Here
        int row=arr.size();
        int col=arr[0].size();
        bool check=false;
        for(int i=0;i<row;i++)
        {
            int k=0;int j=row-1;
             check=false;
            while(k<j)
            {
                if(arr[i][k]!=arr[i][j])
                {
                    check=true;
                    break;
                }
                k++;
                j--;
            }
            if(check==false)
            {
               string r=to_string(i);
               string ans=r+' '+'R';
               return ans;
            }
        }
        for(int i=0;i<col;i++)
        {
            int k=0;int j=row-1;
             check=false;
            while(k<j)
            {
                if(arr[k][i]!=arr[j][i])
                {
                    check=true;
                    break;
                }
                k++;
                j--;
            }
            if(check==false)
            {
               string r=to_string(i);
               string ans=r+' '+'C';
               return ans;
            }
        }
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends