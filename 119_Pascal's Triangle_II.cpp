#include<iostream>
#include<vector>

using namespace std;
// Time Complexity -> O(n) 
// Space Complexity -> O(n)
vector<int> getRow(int rowIndex) {
    vector<int> pasRow( rowIndex+1 , 1 );
    for( int i=1 ; i < rowIndex ; i++){
        pasRow[i] = (long) pasRow[i-1] * (rowIndex - i + 1) / i ;
    }
    return pasRow ;
}