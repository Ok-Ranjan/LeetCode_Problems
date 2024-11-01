#include<iostream>
#include<string>

using namespace std;

string makeFancyString(string s) {
    int n = s.length();
    string temp;
    temp.push_back( s[0] );
    for( int i=1 , c=1 , k=1 ; i < n ; i++){
        if( temp[i-k]!=s[i] ){
            temp.push_back( s[i] );
            c=1;
        }
        else if( c<2 && temp[i-k]==s[i] ){
            temp.push_back( s[i] );
            c++;
        }
        else
            k++;
    }
    return temp;
}