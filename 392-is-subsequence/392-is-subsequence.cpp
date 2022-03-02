class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len1=s.length();
        int len2=t.length();
        int i=0,j=0;
int count=0;
        while(i<len1&&j<len2){
            if(s[i]==t[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
            
        }
        if(count==len1){
            return true;
        }
        return false;
    }
};