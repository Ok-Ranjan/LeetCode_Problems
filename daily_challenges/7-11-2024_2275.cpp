/* 2275. Largest Combination With Bitwise AND Greater Than Zero*/
#include<iostream>
#include<vector>

using namespace std;

// T.C -> O(24*n) -> O(n)
// S.C -> O(1)

int largestCombination(vector<int>& candidates) {
    int n = candidates.size();

    int maxCom = 0;
    for( int bitPos=0 ; bitPos < 24 ; bitPos++){    //O(24)
        int currCom= 0 ;
        for( int i=0 ; i < n ; i++){    //O(n)
            if( candidates[i] & (1 << bitPos) )
                currCom++;
        }
        maxCom = max( maxCom , currCom );
    }

    return maxCom;
}