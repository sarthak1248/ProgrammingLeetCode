class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int cnt=0;
        int len = s.length();
        string res="";
        for(int i=0;i<len;i++){
            if(s[i]=='('){
                cnt++;
            }
            else if(s[i]==')'){
                if(cnt==0){
                    s[i]='$';
                }
                else{
                cnt--;
            }
            }
        }
        cnt=0;
        for(int i=len-1;i>=0;i--){
            if(s[i]==')'){
                cnt++;
            }
            else if(s[i]=='('){
                if(cnt==0){
                    s[i]='$';
                }
                else{
                    cnt--;
                }
            }
        }
        for(int i=0;i<len;i++){
            if(s[i]!='$'){
                res.push_back(s[i]);
            }
        }
        return res;
    }
};