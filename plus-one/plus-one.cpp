class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int incre= 1;
    for(int i=digits.size()-1;i>=0;i--){
        digits[i]+= incre;
        incre = digits[i]/10;
        digits[i]=digits[i]%10;
    }
        if(incre!=0){
            digits.insert(digits.begin(),incre);
        }
 return digits;       
    }
};