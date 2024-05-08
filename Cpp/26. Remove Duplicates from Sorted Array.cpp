#include<bits/stdc++.h>
using namespace std;

//LeetCode UserName: SayedNahid
//Problem-2000: Reverse Prefix of Word
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1; j<nums.size(); j++)
            if(nums[i] != nums[j]) swap(nums[++i], nums[j]);
        return i+1;
    }
};

int main(){
    Solution test;
    vector<int> nums={1,1,2};
    cout << test.removeDuplicates(nums) << '\n';
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    cout << test.removeDuplicates(nums) << '\n';
    return 0;
}