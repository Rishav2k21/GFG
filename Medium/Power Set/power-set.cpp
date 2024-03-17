//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int subset=1<<s.size();
		    vector<string>p;
		    for(int i=0;i<=subset-1;i++){
		       string q="";
		        for(int j=0;j<s.size();j++){
		            if(i&(1<<j)){
		                q+=s[j];
		            }
		        }
		        if(q.size()!=0){
		        p.push_back(q);
		        }
		    }
		    sort(p.begin(),p.end());
		    return p;
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends