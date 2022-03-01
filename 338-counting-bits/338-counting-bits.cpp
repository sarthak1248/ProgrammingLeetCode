class Solution {
public:
    vector<int> countBits(int n) {
       vector<int> ans;

        ans.push_back(0);
      for(int i=1;i<=n;i++){
          int res = ans[i&(i-1)]+1;
          ans.push_back(res);
      }
        
        return ans;
    }
};