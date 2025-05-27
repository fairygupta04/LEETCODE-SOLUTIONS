// Problem: Concatenation of Array
// Topic: Arrays
// Link: https://leetcode.com/problems/concatenation-of-array/
//Approach:
//->Create a new vector  ans of size 2 * n.
//->Use loop to copy elements from nums twice.
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      int n=nums.size();
       vector<int>ans(2*n);

for(int i=0;i<n;i++){
    ans[i]=nums[i];
    ans[n+i]=nums[i];
}
 return ans;
    }
};
