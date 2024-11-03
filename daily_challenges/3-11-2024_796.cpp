#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool rotateString(string s, string goal) {
    int l = s.length();
    int n = goal.length();
    // T.C -> O(n)
    // S.C -> O(1)
    if( l != n )
        return false;
    if( (s+s).find(goal) != string::npos ){
        return true;
    }
    //(s+s) concatenate
    //If you concatenate a string with itself , it will contain all rotations as a substring in it...
    return false;
}