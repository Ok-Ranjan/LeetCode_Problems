#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
#include<stack>
#include<utility>
using namespace std;

int maxUniqueSplit(string s) {
        
    vector<int> used(25,-1);
    int n = s.length(); 
    
    for( int i=0 ; i < n ; i++ ){
        used[ s[i] - 'a' ] = 0;
    }
    int count = 0 ;
    for( int i=0 ; i< n ; i++ ){
        if( ! (used[ s[i]-'a' ]) ){
            count++;
            used[ s[i]-'a' ]++ ;
        }
        else if( i < n-1 && s[i]==s[i+1]){
            count++;
            used[ s[i]-'a' ]++;
            while( s[i] == s[i+1] )
                i++;
        }
    }
    
        return count ;
}

int maxUniqueSplit1(string s) {
    unordered_set<string> used;  // To store unique substrings
    int n = s.length();
    int maxSubCount = 0;
    
    for (int i = 0; i < n;) {
        string sub = "";
        // Explore all substrings starting from index i
        for (int j = i; j < n; j++) {
            sub += s[j];  // Build substring character by character
            if (used.find(sub) == used.end()) {  // If substring is unique
                used.insert(sub);  // Mark substring as used
                maxSubCount++;     // Increment unique substring count
                i = j + 1;         // Move to the next starting index
                break;              // Exit this inner loop
            }
        }
        // If we can't find any new substring, move the index forward manually
        if (i == 0) i++;
    }
    
    return maxSubCount;
}

int maxUniqueSplit2(string s) {
    int n = s.length();
    unordered_set<string> set;
    stack<pair<int, unordered_set<string>>> stk;
    stk.push({0, unordered_set<string>()});
    int maxCount = 0;
    
    while (!stk.empty()) {
        auto [index, currSet] = stk.top();
        stk.pop();
        
        // If we've reached the end of the string, update the maxCount
        if (index == n) {
            maxCount = max(maxCount, (int)currSet.size());
            continue;
        }
        
        // Loop over possible substrings
        for (int i = index; i < n; i++) {
            string sub = s.substr(index, i - index + 1);
            if (currSet.find(sub) == currSet.end()) {  // If substring is not already used
                unordered_set<string> newSet = currSet;
                newSet.insert(sub);
                stk.push({i + 1, newSet});  // Move forward
            }
        }
    }
    
    return maxCount;
}

int main(){
    string s="addbsd";
    cout<<maxUniqueSplit2(s);
}