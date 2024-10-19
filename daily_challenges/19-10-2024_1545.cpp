#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


char findKthBit(int n, int k) {
    string s = "0" , t = s;

    for( int i=1 ; i < n ; i++){
        s = s + "1" ;
        int j=0;
        while( j < t.length() ){
            if( t[j] == '1' ) t[j] = '0' ;
            else t[j] = '1' ;
            j++;
        }
        reverse(t.begin() , t.end());
        s = s + t;
        t = s ;
    }
    
    return s[k-1];
}

int main(){

    cout<<findKthBit( 3 , 1 )<<endl;
    cout<<findKthBit( 4 , 11 )<<endl;
    cout<<findKthBit( 7 , 19 )<<endl;
}