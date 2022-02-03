class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        if(arr.size()==1){
            return;
        }
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k%arr.size());
        reverse(arr.begin()+k%arr.size(),arr.end());
        
    }
};