#include<iostream>
#include<string>

using namespace std;

bool isCircularSentence(string sentence) {
    int l = sentence.length();
    if( sentence[0] != sentence[l-1] )
        return false;
    for( int i=0 ; i < l ; i++ ){
        if( sentence[i] != ' ')
            continue;
        if( sentence[i]==' ' && sentence[i-1] != sentence[i+1] )
            return false;
    }
    return true;
}