class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3){
            return 0;
        }
        int cnt=0,ans=0;
       int diff= nums[1]-nums[0];
        for(int i=1;i<nums.size()-1;i++){
            int newdiff= nums[i+1]-nums[i];
            if(newdiff==diff){
                cnt++;
            }
            else{
                diff=newdiff;
                cnt=0;
            }
            ans=ans+cnt;
        }
        return ans;
    }
};