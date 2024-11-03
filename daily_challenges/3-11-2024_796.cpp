#include<iostream>
#include<string>

using namespace std;

bool rotateString(string s, string goal) {
    int l = s.length();
    int i=0;
    while( i < l ){
        int temp = s[0];
        for( int j=1; j < l ; j++){
            s[j-1] = s[j];
        }
        s[l-1] = temp;
        if( s == goal )
            return true;
        i++;
    }
    return false;
}