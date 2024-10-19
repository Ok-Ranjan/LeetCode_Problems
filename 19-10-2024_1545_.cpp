#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
char recursive( int len , int k);

char findKthBit(int n, int k) {
    int len = pow(2,n)-1;
    return recursive( len , k );
}
char recursive( int len , int k){
    if( len == 1 )
        return '0';

    int half = len/2 ;
    int mid = half + 1;

    if( k == mid )  //middle
        return '1' ;
    else if( k < mid ){ //left
        return recursive( half , k );
    }
    else{   //right
        char ch = recursive( half , len-k+1 );
        return (ch!='1')? '1' : '0';
    }
}

int main(){

    cout<<findKthBit( 3 , 1 )<<endl;    // 0
    cout<<findKthBit( 4 , 11 )<<endl;   // 1
    cout<<findKthBit( 5 , 24 )<<endl;   // 0
}