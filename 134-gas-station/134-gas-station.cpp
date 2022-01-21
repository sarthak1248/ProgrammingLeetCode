class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int start_if = 0;
        int total_fuel_incircle = 0;
        int least = 0;
        for (int i = 0 ; i < gas.size(); i++) {
            /*
            total fuel to go around circle if it is less than zero we cannot start from any index
            */
            total_fuel_incircle += gas[i] - cost[i]; 
            if (total_fuel_incircle < least) {
                start_if = i+1; 
                least = total_fuel_incircle ; 
            }
        }
        return total_fuel_incircle >= 0 ? start_if % gas.size() : -1; 
    }    
    
};