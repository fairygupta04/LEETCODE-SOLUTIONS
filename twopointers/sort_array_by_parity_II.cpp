// Problem: Sort Array By Parity II
// Topic: Two pointers
// Link: https://leetcode.com/problems/sort-array-by-parity-ii/
//Approach:
//->Initialize two pointers .One for even index(from 0) and second for odd ones(from 1).
//->If elements on even indices are even ,move the pointer ahead by 2.
//->Else if the elements on odd indices are odd,move the pointer ahead by 2.
//->Else swap the elements .Repeat the process.
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       int n = nums.size();
        int i=0; 
        int j = 1; 
        while(i<n && j<n){
            if(nums[i]%2==0) i+=2; 
            else if(nums[j]%2==1) j+=2;
            else swap(nums[i],nums[j]); 
           
        }
        return nums;
    }
};
