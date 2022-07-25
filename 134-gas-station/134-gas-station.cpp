class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
     int deficit = 0;
        int maxGas = 0;
        int start = 0;
            for(int i = 0; i< gas.size(); i++){
                maxGas += gas[i] - cost[i];
                if(maxGas < 0){
                    start = i + 1;
                    deficit += maxGas;
                    maxGas = 0;
                }
                
            }
        if(maxGas + deficit >= 0){
            return start;
        }
        else
            return -1;   
    }
};