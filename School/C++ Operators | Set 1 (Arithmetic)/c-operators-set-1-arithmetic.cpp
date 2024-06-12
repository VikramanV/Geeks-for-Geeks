//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> cppOperators(int A, int B) {
        // code here
        vector<int> ans;
            int add= A+B;
            int mul= A*B;
            int sub,divi;
        
        if(B>=A){
            sub= B-A;
            divi= B/A;
        }
        else{
            sub= A-B;
            divi= A/B;
        }
        ans.push_back(add);
        ans.push_back(mul);
        ans.push_back(sub);
        ans.push_back(divi);
        
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int A, B;
        cin >> A >> B;
        Solution ob;
        vector<int> ans = ob.cppOperators(A, B);
        for (int u : ans) cout << u << "\n";
    }
}
// } Driver Code Ends