#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool rotateString(string s, string goal) {
    int l = s.length();
    for( int i=0 ; i < l ; i++ ){
        rotate( s.begin() , s.begin()+1 , s.end() );
        if( s == goal )
            return true;
    }
    return false;
}