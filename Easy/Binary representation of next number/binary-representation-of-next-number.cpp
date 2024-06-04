//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string binaryNextNumber(string s) {
       int n = s.size();
        int i=n-1,j=0;
        for(j;j<n-1;j++) if(s[j]!='0') break;
        s=s.substr(j);
        i-=j;
        while(i>=0){
            if(s[i]=='1') s[i--]='0';
            else{
                s[i] = '1';
                return s;
            }
        }
        return '1'+ s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.binaryNextNumber(s);
        cout << "\n";
    }

    return 0;
}
// } Driver Code Ends