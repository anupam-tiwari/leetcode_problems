class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int num_ones = 0; 
        int num_flips = 0; 
        for(char c:s){
            if(c == '1'){
                ++num_ones; 
            }else if(num_ones>0){
                ++num_flips; 
                --num_ones; 
            }
        }
        return num_flips; 
    }
};