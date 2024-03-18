//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    string getBinaryRep(int N)
    {
        string s;
        for (int i=0;i<30;i++){
            if(N&(1<<i)){
                s+='1';
            }
            else{
                s+='0';
            }
        }
        reverse(s.begin(),s.end());
        return s;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends