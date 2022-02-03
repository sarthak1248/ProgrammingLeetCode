class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int len=nums.size();
        int max=0,index;
        if(len==1 && nums[0]==1){
            return 0;
        }
        for(int i=0;i<len;i++){
            if(nums[i]>max){
                index=i;
                max=nums[i];
            }
        }
        for(int i=0;i<len;i++){
            if(max< (2*nums[i]) && index!=i){
                return -1;
            }
        }
        return index;
    }
};