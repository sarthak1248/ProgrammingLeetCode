class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int len = arr.size();
        int i=0;
        if(len<3){
            return false;
        }
        while(arr[i]<arr[i+1 ] && i<len-1){
            i++;
        }
        if(i==len-1|| i==0){
            return false;
        }
        while(i<len-1 && arr[i]>arr[i+1]){
            i++;
        }
        if(i==len-1){
            return true;
        }
        return false;
    }
};