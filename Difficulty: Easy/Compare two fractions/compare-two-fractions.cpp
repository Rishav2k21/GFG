//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {
         // Code here
        string temp="";
        int n1, n2, n3, n4;
        for(int i=0; str[i]!=','; i++){
            if(str[i]=='/'){
                n1= stoi(temp);
                temp="";
            }else{
                temp+=str[i];
            }
        }
        
        n2=stoi(temp);
        temp="";
        for(int i=str.size()-1; str[i]!=' '; i--){
            if(str[i]=='/'){
                reverse(temp.begin(), temp.end());
                n4= stoi(temp);
                temp="";
            }else{
                temp+=str[i];
            }
        }
        reverse(temp.begin(), temp.end());
        n3= stoi(temp);
        
        double frac1= double(n1)/ n2;
        double frac2= double(n3)/ n4;

        if(frac1 > frac2) return to_string(n1) +'/'+ to_string(n2);
        else if(frac2 > frac1) return to_string(n3) +'/'+ to_string(n4);
        return "equal";
        
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends