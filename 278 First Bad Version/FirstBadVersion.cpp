#include <iostream>

using namespace std;

int gbadversion = 0; // holds the number that is the bad version. 

//Checks if number passed is greater than or equal to the bad version 
bool isBadVersion(int num){
    if (num >= gbadversion){
        return true;
    }else{
        return false;
    }
}

//Checks to see which number is the frist badversion #
int firstBadVersion (int n){
    int l = 1; 
    int r = n; 

    while (l<r){
        int mid=l+(r-l)/2;

        //if the value passed is a bad version then it becomes the upper bound of the interval. 
        if(isBadVersion(mid)){
            r = mid; 

        //if it is not the bad version we increment by one and set a new lower bound. 
        }else{
            l = mid + 1;
        }
    }
    
    return l; //retruns the lower bound because it will eventually become the first bad. 
    //We don't return r because it would be last bad. 
}

int main(){

    gbadversion = 4; 
    cout<<firstBadVersion(5)<<endl; 



    return 0;
}