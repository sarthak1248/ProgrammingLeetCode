class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            if(ans.find(target-nums[i])!=ans.end()){
                return {ans[target-nums[i]],i};
            }
            ans[nums[i]]=i;
            
        }
        return {0,0};
    }
};