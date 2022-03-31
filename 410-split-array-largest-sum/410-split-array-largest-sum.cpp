class Solution {
public:
     bool check(vector<int>& nums, int k,int mxs){
        int c=0,s=0;
        for(auto&i:nums){
            s+=i;
            if(s>mxs){
                c++;
                s=i;
            }
            if(c>=k) return false;
        }        
        return c<k;
    }
    int splitArray(vector<int>& nums, int k) {
       int l=0,h=0;
       for(auto&i:nums){
            l=max(i,l);
            h+=i;
       }        
       int res=-1; 
       while(l<=h){
           int m=l+(h-l)/2;
           if(check(nums,k,m)){
               res=m;
               h=m-1;
           }else l=m+1;
       } 
       return res; 
    }
};