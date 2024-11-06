#include<iostream>
#include<vector>

using namespace std;

int setOfBits( int n ); //decleration

//Approach-2 (Using simple segment sorting check)
//T.C : O(n)
//S.C : O(1)
bool canSortArray(vector<int>& nums) {
    int n = nums.size();

    int numOfSetBits = setOfBits(nums[0]);
    int minOfSegment = nums[0];
    int maxOfSegment = nums[0];

    int maxOfPreSegment = INT_MIN;

    for( int i=1 ; i < n ; i++){
        if( numOfSetBits == setOfBits(nums[i]) ){   //they belong to same segment's
            minOfSegment = min( minOfSegment , nums[i]);    //find min of current segment
            maxOfSegment = max( maxOfSegment , nums[i]);    //find max of current segment
            continue;
        } else{ //Element belongs to new segment's

            if( maxOfPreSegment > minOfSegment) //not possible to sorted
                return false;
            
            //update the previous Segment's max 
            maxOfPreSegment = maxOfSegment;

            //new segment started now
            minOfSegment = nums[i];
            maxOfSegment = nums[i];
            numOfSetBits = setOfBits(nums[i]);
        }
    }
    //final check
    if( maxOfPreSegment > minOfSegment )
        return false;
    return true;
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