#include<iostream>
#include<string>

using namespace std;

int minChanges(string s) {
    int ans=0;
    for( int i=0 , j=s.length()-1 ; i < j ; i+=2 , j-=2){
        if( s[i] != s[i+1] )
            ans++;
        if( i+1<j && s[j] != s[j-1] )
            ans++;
    }
    return ans;
}