#include <iostream>

using namespace std; 

int main(){
    int arr[4] = {2,7,11,15}; 
    int target = 17; 

    //brute force 
    for(int i = 0; i<4; i++){
        int num1 = arr[i]; 
        for(int j = i+1; j<4; j++){
            int num2 = arr[j]; 
            if(num1 + num2 == target){
                cout<<i<<" "<<j; 
            }
        }
    }
}

//map based approach 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans; 
        unordered_map<int,int> mp; 
        mp[nums[0]] = 0; 
        for(int i = 1; i<nums.size(); i++){
            int temp = target - nums[i];
            if(mp.find(temp) != mp.end()){
                ans.push_back(mp[temp]); 
                ans.push_back(i); 

            }
            else{
                mp[nums[i]] = i; 
            }
        }  
        return ans; 
    }
};

o(n)
o(n)