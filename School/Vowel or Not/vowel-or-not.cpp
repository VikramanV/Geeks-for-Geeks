//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isVowel(char c){
        // code here 
        if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
            return "YES";
        }
        else{
            return "NO";
        }
        
        /*string arr[]={'a','A','e','E','i','I','o','O','u','U'};
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(c==arr[i]){
                return "YES";
            }
            else{
                return "NO";
            }
        }*/
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0; 
} 
// } Driver Code Ends