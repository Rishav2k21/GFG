//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        int x=0;
     for(int i=0;i<nums.size();i++){
         x=x^nums[i];
     }
     int bit=((x&(x-1))^x);
     int s1=0;
     int s2=0;
     for(int i=0;i<nums.size();i++){
         if(bit&nums[i]){
             s1=s1^nums[i];
         }
         else{
             s2=s2^nums[i];
         }
     }
     if(s1>s2){
         return {s2,s1}; 
         
     }
     return {s1,s2};
     
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends