#include<iostream>
#include<vector>

using namespace std;
// Time Complexity -> O(n)
// Space Complexity -> O(1)
int compress(vector<char>& chars) {
    int n = chars.size() ;

    if( n==1 ){
        return n;
    }
    int cnt, i=0 , j , s=0;
    while( i < chars.size()  ) {
        char letters  = chars[i];
        for( cnt=1 ; (i+1)<n && chars[i] == chars[i+1] ; cnt++,i++){}
        chars[s++] = chars[i];
        i++;
        if( cnt > 1 ){
            for( auto c : to_string(cnt) )
                chars[s++] = c;
        }
    }

    return s;
}