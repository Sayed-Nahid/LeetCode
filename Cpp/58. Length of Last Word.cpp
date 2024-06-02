#include<bits/stdc++.h>
using namespace std;

//LeetCode UserName: SayedNahid
//Problem-58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] != ' ' && len == 0) len++;
            else if(s[i] == ' ' && len != 0) break;
            else if(s[i] != ' ') len++;
        }
        return len;
    }
};

int main(){
    Solution test;
    cout << test.lengthOfLastWord("Hello World") << '\n';
    cout << test.lengthOfLastWord("   fly me   to   the moon  ") << '\n';
    cout << test.lengthOfLastWord("luffy is still joyboy") << '\n';
    return 0;
}