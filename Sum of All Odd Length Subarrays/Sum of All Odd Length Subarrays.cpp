#include <vector>
#include <iostream>

using namespace std;

int sumOddLengthSubarrays (vector<int>& arr){
    int odd = 1; 
    int sum = 0; 

    //Checks if odd interval is greater than the size of the array.  
    while (odd <= arr.size())
    {
        for (int i = 0; i < arr.size(); i++)
        {
            int num = 0; 
            // sums the odd length arrays
            while ((num < odd) && (i + odd <= arr.size()) )
            {
                sum += arr[i+num];
                num++; 
            }
        }
                
        odd = odd + 2; 
    }
    
    return sum; 
}


int main(){

    vector<int> test; 
    test.push_back(10);
    test.push_back(11);
    test.push_back(12);



    cout<<sumOddLengthSubarrays(test)<<endl;

    return 0; 
}