//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

     int n = nums.size();
         
         long long int totalProd =1;
         int count =0,index=0;
         for(int i=0;i<n;i++){
            if(count==2) break;
             if(nums[i]==0){
                 count++;
                 index=i;
             }
             if(nums[i]!=0)
                totalProd = totalProd * nums[i];
         }
         
         if(count==2){ 
             vector<long long int> arr(n,0);
             return arr;
         }
         
         if(count==1){
             vector<long long int> arr(n,0);
             arr[index]=totalProd;
             return arr;
         }
         
         vector<long long int> arr;

         for(int i=0;i<n;i++){
             arr.push_back(totalProd/nums[i]);
         }
         
         return arr;
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends