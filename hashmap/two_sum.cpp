// Problem: Two Sum
// Topic: HashMap
// Link: https://leetcode.com/problems/two-sum/
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
