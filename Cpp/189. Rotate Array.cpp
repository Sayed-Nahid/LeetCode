#include<bits/stdc++.h>
using namespace std;

//LeetCode UserName: SayedNahid
//Problem-189. Rotate Array
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        std::ios_base::sync_with_stdio(false);
        k%=nums.size();
        std::reverse(nums.begin(), nums.end());
        std::reverse(nums.begin(), nums.begin()+k);
        std::reverse(nums.begin()+k, nums.end());
    }
};

int main(){
    Solution test;
    vector<int> nums={1,2,3,4,5,6,7};
    test.rotate(nums, 3);
    cout << '\n';
    vector<int> nums={-1,-100,3,99};
    test.rotate(nums, 2);
    cout << '\n';
    return 0;
}