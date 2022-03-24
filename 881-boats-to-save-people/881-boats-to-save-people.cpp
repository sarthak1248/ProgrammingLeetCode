class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(),p.end());
        int high=p.size()-1;
        int low=0;
        int count=0;
        while(low<=high){
            
             if(p[low]+p[high]>limit){
                high--;
                count++;
            }
           
            
            else {
                count= count+1;
                low++;
                high--;
            }
        }
        return count;
    }
};