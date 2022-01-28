class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
        int max1=0;
        int count=0;
        int length= nums.size();
        if(length==0){
            return 0;
        }
        for(int i=0;i<length-1;i++){
            if(nums[i]+1==nums[i+1]){
                count++;
                max1=max(count,max1);
            }
            else if(nums[i]==nums[i+1]){
                
            }
            else{
                count=0;
            }
        }
        return max1+1;
        
    }
};