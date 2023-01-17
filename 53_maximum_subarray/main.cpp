#include <iostream>

using namespace std; 

int max_subarray(int arr[], int len){
    int max_ending_here = 0; 
    int max_so_far = INT_MIN; 

    for(int i = 0; i<len; i++){
        max_ending_here = max_ending_here + arr[i]; 
        if(max_ending_here > max_so_far){
            max_so_far = max_ending_here; 
        }
        if (max_ending_here < 0) {
            max_ending_here = 0; 
        }
    }

    return max_so_far; 
} 
int main(){
    int arr[2] = {-2,1}; 
    cout<<max_subarray(arr, 2); 
}