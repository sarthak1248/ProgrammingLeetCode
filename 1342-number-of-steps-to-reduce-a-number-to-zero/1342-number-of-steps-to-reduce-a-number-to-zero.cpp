class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num){
            if((num & 1)==0){
                num = num>>1;
            }
            else{
                num=num-1;
            }
            ans++;
        }
        return ans;
        
    }
};