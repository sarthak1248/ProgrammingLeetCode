class Solution {
public:
    int maxArea(vector<int>& height) {
        int low=0;
        int high=height.size()-1;
        int res=-1;
        while(low<=high){
            res= max(res, min(height[low],height[high])*(high-low));
            if(height[high]>height[low]){
                low++;
            }
            else{
                high--;
            }
            
        }
        return res;
    }
};