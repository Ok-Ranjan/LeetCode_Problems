#include<iostream>
#include<vector>

using namespace std;
// Time Complexity -> O(n^2) 
// Space Complexity -> O(n)
vector<int> getRow(int rowIndex) {
    vector<int> pasRow;
    for( int i=0 ; i <= rowIndex ; i++){
        pasRow.push_back( 1 );
        for( int j=i-1 ; j > 0 ; j-- ){
            pasRow[j] += pasRow[j-1] ;
        }
    }
    return pasRow ;
}