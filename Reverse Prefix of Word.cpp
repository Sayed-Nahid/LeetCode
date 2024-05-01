//LeetCode UserName: SayedNahid

#include<bits/stdc++.h>
using namespace std;

//Problem-2000: Reverse Prefix of Word
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int pos=word.find(ch), len=word.length()-1;
        if(pos==-1) return word;
        else{
            reverse(word.begin(), word.begin()+pos+1);
            return word;
        }
    }
};


int main(){
    Solution test;
    cout << test.reversePrefix("abcdefd", 'd') << '\n';
    cout << test.reversePrefix("xyxzxe", 'z') << '\n';
    cout << test.reversePrefix("abcd", 'z') << '\n';
    return 0;
}