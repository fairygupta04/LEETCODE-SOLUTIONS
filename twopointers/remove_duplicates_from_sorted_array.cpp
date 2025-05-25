// Problem: Remove Duplicates from Sorted Array
// Topic: Two pointers
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
//Approach:
//->Initialize two pointers.One from the first index and second from the second index(or next to the first one).
//->Initialize a variable for storing the count of unique numbers.
//->Run a loop and check if the numbers that the pointers are pointing to are equal or not.
//->If not ,swap the number pointed by the second pointer with the number next to the number pointed by the first pointer and increase the count and the pointers by 1.
//->This is done to bring the numbers that are repeating to the right side of the array.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        int j=i+1;
        int k=0;
      for(;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            swap(nums[i+1],nums[j]);
            i++;
            k++;
        }
      }
      return k+1;
    }
};
