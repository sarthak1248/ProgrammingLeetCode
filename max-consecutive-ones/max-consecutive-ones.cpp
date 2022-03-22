class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                sum++;
                ans= max(sum,ans);
            }
            else if(nums[i]==0){
                sum=0;
            }
        }
        return ans;
    }
};