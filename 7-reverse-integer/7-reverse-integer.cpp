class Solution {
public:
    int reverse(int x) {
     int z=x;
     int ans=0;
        int y;
       
          while(x!=0){
               if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
            return 0;
        }
              y =  x%10;
              x=x/10;
              ans=ans*10+y;
          }
        
        return ans;
    }
};