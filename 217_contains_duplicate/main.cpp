#include <iostream> 

using namespace std; 

//brute force method; 
// 2 loops



public boolean containsDuplicate_bruteforce(int[] nums) {
   if (nums == null || nums.length == 0) return false;
   
   int l = nums.length;
   for (int i=0; i<l; i++) {
      for (int j=i+1; j<l; j++) {
         if (nums[i] == nums[j]) {
            return true;
         }
      }
   }
   return false;
}

int main(){

}

// brute force: O(N^2)

//Method 2 

//sort first and then find cosiciutive members; 

