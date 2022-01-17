class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> m;
        int i=0,j=0;
        unordered_map<string,char> m2;
        while(i<pattern.length()){
            if(j>=s.length()){
                return false;
            }
            string temp="";
            while(s[j]!=' '&&j<s.length()){
                temp+=s[j];
                j++;
            }
            if(m.find(pattern[i])==m.end()&&m2.find(temp)==m2.end()){
                m[pattern[i]]=temp;
                m2[temp]=pattern[i];
            }
            else if(m.find(pattern[i])==m.end()){
                if(m2[temp]!=pattern[i]){
                    return false;
                }
                m[pattern[i]]=temp;
                
            }
            else if(m2.find(temp)==m2.end()){
                if(m[pattern[i]]!=temp){
                    return false;
                }
                m2[temp]=pattern[i];
                
            }
            
            else{
                if(m[pattern[i]]!=temp){
                    return false;
                }
                if(m2[temp]!=pattern[i]){
                    return false;
                }
                
            }
            i++;
            j++;
            
        }
        if(j<s.length()){
            return false;
        }
       
        return true;
        
    }
};