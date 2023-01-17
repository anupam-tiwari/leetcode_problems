#include <iostream>

using namespace std;

int binary_search(int arr[], int target, int n)
{
    int start = 0;
    int end = n;
    int mid = 0;
    {
        for (int i = 0; i < n; i++)
        {   
            mid = start + (end - start)/2; 

            if (arr[mid] == target)
            {
                return mid;
            }
            if (arr[mid] < target)
            {
                start = mid;
            }
            if (arr[mid] > target)
            {
                end = mid;
            }
        }
    }
    return 0; 
}

int main()
{
    int arr[6] = {-1,0,3,5,9,12};
    // brute force
    cout << binary_search(arr, 9, 6);
}