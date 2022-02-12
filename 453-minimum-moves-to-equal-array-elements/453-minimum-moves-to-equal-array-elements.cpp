class Solution {
public:
    int minMoves(vector<int>& nums) {
    int len = nums.size();
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<len;i++){
            ans+=nums[i]-nums[0];
        }
        
        return ans;
    }
};