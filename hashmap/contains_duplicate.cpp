// Problem: Contains Duplicate
// Topic: Hash map
// Link: https://leetcode.com/problems/contains-duplicate/
//Approach:
//->Create a hashmap and store the frequency of numbers in it.
//->If the frequency at any time exceeds 1,return true.
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_map<int,int>mp;
       for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
        if(mp.at(nums[i])>1){
            return true;
        }
       }
       return false;
    }
};
