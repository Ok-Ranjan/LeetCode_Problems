#include<iostream>
#include<vector>

using namespace std;

int fib(int n) {
    vector<int> f(n+1,-1);
    return F( f , n);
}
int F( vector<int> &f , int n){
    if( f[n] != -1)
        return f[n];
    if( n==0 || n==1 )
        f[n] = n;
    else
        f[n] = F(f , n-1) + F(f , n-2);
    return f[n];
}