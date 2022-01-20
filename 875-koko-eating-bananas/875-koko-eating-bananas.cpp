class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=1000000000;
        
        while(low<=high){
            int mid = low + (high-low)/2;
            int i=0;
            for(int j=0;j<piles.size();j++){
                i=i+ ceil(1.0*piles[j]/mid);
                    
            }
            if(i>h){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low;
        
    }
};