#include<bits/stdc++.h>
using namespace std;

//LeetCode UserName: SayedNahid
//Problem-2441: Largest Positive Integer That Exists With Its Negative
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i= nums.size()-1; i>0; i--){
            if(binary_search(nums.begin(), nums.end(), -nums[i])) return nums[i];
        }
        return -1;
    }
};

int main(){
    Solution test;
    vector<int> nums = {-1,2,-3,3};
    cout << test.findMaxK(nums) << '\n';
    vector<int> nums = {-1,10,6,7,-7,1};
    cout << test.findMaxK(nums) << '\n';
    vector<int> nums = {-10,8,6,7,-2,-3};
    cout << test.findMaxK(nums) << '\n';
    return 0;
}