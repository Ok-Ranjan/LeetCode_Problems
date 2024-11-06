#include<iostream>
#include<vector>

using namespace std;

int setOfBits( int n ); //decleration

bool canSortArray(vector<int>& nums) {
    int n = nums.size();
    //Bubble Sort
    for( int i=0 ; i < n ; i++ ){ //total no. of round
        bool swapped  = false;    
        for( int j = 0 ; j < n-i-1 ; j++){ 
            if( nums[j] > nums[j+1] && setOfBits(nums[j]) != setOfBits(nums[j+1]))
                return false; //setOfBits not equal 
            else if( nums[j] > nums[j+1] ){
                swap( nums[j] , nums[j+1] );
                swapped = true;
            }
        }
        if( !swapped )
            break;  //nums is sorted
    }
    return true; //sorted
}

// set Bits count
int setOfBits( int n ){
    int cnt=0;
    while( n ){
        if( n&1 )
            cnt++;
        n = n>>1;
    }
    return cnt; //return no of setBits
}