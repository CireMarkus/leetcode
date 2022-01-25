#include <iostream>
#include <cmath>
#include <vector>
#include <chrono>

using namespace std;

int binary_search(vector<int>& arr, int target){
    
    int left = 0; 
    int right = arr.size()-1; 
    int mid = 0; 

    //condition to run until left is greater than right. 
    while (left <= right){
        // Finds the middle value of the interval
        mid = left + (right-left) / 2;

        //if the target is greater than the middle value
        // the left bound of the vector becomes mid+1
        if(target == arr[mid]){
            return mid;
        }
        //if the target is less than the middle value
        // the right bound of the vector becomes mid-1
        if(target < arr[mid]){
            right = mid - 1;
        }
        //if the target is equal to the middle value
        // the middle value is returned
        if (target > arr[mid]){
            left = mid + 1; 
        }
        //if the target value is not in the vector -1 is returned
    }
    return -1; // stops an error from showing
}




int main(void){

chrono::steady_clock::time_point begin = chrono::steady_clock::now();

    vector<int> arr; 
    for( int i = -998; i < 998; i++){
        arr.push_back(i);
    }
chrono::steady_clock::time_point end = chrono::steady_clock::now();
    cout << binary_search(arr, 998) << endl;
    cout << "Elapsed time = " << chrono::duration_cast<chrono::microseconds> (end - begin).count() << "[us]" << endl;
    return 0;
}