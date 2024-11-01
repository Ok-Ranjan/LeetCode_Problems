#include<iostream>
#include<vector>
using namespace std;

// Time Complexity -> O(n^2) 
// Space Complexity -> O(n^2)
 
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n = image.size();
    vector<vector<int>> img(n , vector<int>(n) );
    for( int r=0 ; r < n ; r++){
        for( int i=0 , j=n-1 ; i < n ; i++ , j--){
            img[r][i] = (!image[r][j]);
        }
    }
    return img;
}