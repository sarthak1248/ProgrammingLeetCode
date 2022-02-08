class Solution {
public:
    int addDigits(int num) {
        int sum2=0;
        while(num!=0){
            int sum=num%10;
            
            sum2=sum+sum2;
            if(num/10==0 && sum2>9){
                num=sum2;
                sum2=0;             
            }
        else{
            num=num/10;
        }
            
            
        }
        return sum2;
        
    }
};