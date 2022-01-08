class Solution {
public:
    string capitalizeTitle(string t) {
        stringstream ss(t);
    string ans;
    
    while(ss){
      string s;
      ss>>s;
      for(int i = 0; i != s.size(); i++)
        if(s[i] < 'a') s[i] += 32;
      
      if(s.size() > 2) s[0] -= 32;
      ans += s + ' ';
    }
    
    ans.pop_back();
    ans.pop_back();
    return ans;
        
    }
};