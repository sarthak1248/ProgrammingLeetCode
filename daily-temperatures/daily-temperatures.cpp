class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        vector<int> ans;
        stack<pair<int,int>> s;
        for(int i=tmp.size()-1;i>=0;i--){
            if(s.size()==0){
                ans.push_back(0);
            }
            else if(s.size()>0 && s.top().first>tmp[i]){
                
                ans.push_back(s.top().second);
                            }
            else if(s.size()>0 && s.top().first<=tmp[i]){
                
             while(s.size()>0 && s.top().first<=tmp[i]){
                                 s.pop();
               
             }                
                if(s.size()==0){
                    ans.push_back(0);
                                }
                else{
                    ans.push_back(s.top().second);
                }
            }
            s.push({tmp[i],i});
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<tmp.size();i++){
            if(ans[i]!=0){
            ans[i]= ans[i]-i;
            }
            }
        return ans;
        
    }
};