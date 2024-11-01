#include<iostream>
#include<string>

using namespace std;

string makeFancyString(string s) {
    string t;
    int cnt =0;
    for( auto ch : s ){
        cnt++;
        if( !t.empty() && t.back()!=ch ){
            cnt=1;
        }
        if( cnt < 3 ){
            t.push_back( ch );
        }
    }
    
    return t;
}