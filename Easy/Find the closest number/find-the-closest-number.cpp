//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest( int n, int k,int arr[]) 
    { 
        int s=0,e=n-1;
        // int minDiff=INT_MAX;
        int result=arr[0];
        while(s<=e){
            int mid=s+(e-s)/2;
            if(abs(arr[mid]-k)==abs(result-k)){
                result=max(result,arr[mid]);
            }
           else if(abs(arr[mid]-k)<abs(result-k)){
                result=arr[mid];
            }
            
            if(arr[mid]==k)return arr[mid];
            else if(arr[mid]<k)s=mid+1;
            else e=mid-1;
            
        }
        return result;
    } 
};

//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(n,k,arr)<<endl;
    }
}

// } Driver Code Ends