#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> pascal(numRows);
    for( int i=0 , j ; i < numRows ; i++){
        pascal[i].push_back(1);
        for( j=1 ; j < i ; j++){
            pascal[i].push_back( pascal[i-1][j-1] + pascal[i-1][j] );
        }
        if( j <= i ){
            pascal[i].push_back( 1 );
        }
    }
    return pascal;
}