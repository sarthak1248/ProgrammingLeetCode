class Solution {
public:
    bool isPalindrome(int x) {
        int y ,t=x;
       long int ans=0;
        while(t>0){
             y= t%10;
            ans= ans*10+y;
            t=t/10;
        } 
        if(ans==x){
            return true;
        }
        return false;
    }
};