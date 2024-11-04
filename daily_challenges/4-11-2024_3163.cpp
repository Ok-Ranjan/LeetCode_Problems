// 3163. String Compression III
#include<iostream>
#include<string>

using namespace std;

string compressedString(string word) {
    string comp;
    for( int i = 0 ; i < word.length() ;  ){
        char c = word[i];
        int cnt;
        for( cnt = 0 ; cnt < 9 && word[i]==c ; cnt++ , i++){}
        comp.push_back(cnt+48);
        comp.push_back(c);
    }
    return comp;
}