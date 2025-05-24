// Problem: Two Sum
// Topic: HashMap
// Link: https://leetcode.com/problems/two-sum/
//Approach:
//->Use a map to store number -> index pairs.
//->For each element, check if (target - current element) exists in map.
//->If it exists, return indices as the solution.
//->Otherwise, add current element and index to the map and continue.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>mp;
    for (int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        
        if(mp.find(diff)!=mp.end()){
            return {mp[diff],i};
        }
         mp[nums[i]]=i;
    }
return {0,0} ;
    }
};
