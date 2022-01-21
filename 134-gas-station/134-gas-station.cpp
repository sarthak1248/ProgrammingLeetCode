class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int fuel=0;
        int least=0;
        int index=0;
        for(int i=0;i<gas.size();i++){
            fuel+= gas[i]-cost[i];
            if(fuel<least){
                
                index=i+1;
                least=fuel;
              
            }
        }
            
            if(fuel>=0){
                return index%gas.size();
            }
            
        return -1;
        
    }
};