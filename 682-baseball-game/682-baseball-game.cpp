class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> ans;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="+"){
                ans.push_back(ans.back()+ans[ans.size()-2]);
                
            }
            else if(ops[i]=="D"){
                ans.push_back(2*ans.back());
            }
            else if(ops[i]=="C"){
               ans.pop_back(); 
            }
            else{
                ans.push_back(stoi(ops[i]));
            }
        }
        return accumulate(ans.begin(),ans.end(),0);
    }
};