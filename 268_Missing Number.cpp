#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int actualSum = 0;
    for( int i=0 ; i < n ; i++){
        actualSum += nums[i];
    }
    int acceptedSum = n*(n+1) / 2;
    
    return acceptedSum - actualSum ; //missing Number
}