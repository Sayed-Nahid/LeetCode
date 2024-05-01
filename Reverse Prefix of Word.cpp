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