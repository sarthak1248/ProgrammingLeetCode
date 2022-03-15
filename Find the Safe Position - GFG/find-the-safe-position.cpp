// { Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution {
  public:
  void solve(vector<int> &ans, int k,int index){
      if(ans.size()==1){
          return;
      }
      index= (index+k)%ans.size();
      ans.erase(ans.begin()+index);
      solve(ans,k,index);
  }
    int safePos(int n, int k) {
        // code here
        vector<int>ans;
        for(int i=0;i<n;i++){
            ans.push_back(i+1);
        }
        int index=0;
        int K=k-1;
        solve(ans,K,index);
        return ans[0];
        
    
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        
        cin>>n>>k;

        Solution ob;
        cout << ob.safePos(n,k) << endl;
    }
    return 0;
}  // } Driver Code Ends