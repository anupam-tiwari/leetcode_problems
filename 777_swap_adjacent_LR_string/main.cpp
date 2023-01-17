#include <iostream> 

using namespace std;

bool swap(string start, string end){
    if(start.length() == 1){
        return false; 
    }  
    return false;
}

int main(){
    string start = "RXXLRXRXL";
    string end = "XRLXXRRLX"; 
    cout<<swap(start, end); 
}