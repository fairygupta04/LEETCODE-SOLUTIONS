// Problem: How Many Numbers Are Smaller Than The Current Number
// Topic: HashMap
// Link: https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/
//Approach:
//->Copy the original array into a new one(v1 here) and sort it.
//->Use a map to store each number and its index.
//->Now use original array to find the numbers from the map(key) and store their values in v2.
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int index=0;
        int n=nums.size();
        vector<int>v2(n);
        vector<int>v1=nums;
        sort(v1.begin(),v1.end());
        unordered_map<int,int>mp;
        for(int i:v1){
            if(mp.find(i)==mp.end()){
                mp[i]=index;
            }
            
            index++;
        }
        index=0;
        for(int i:nums){
            if(mp.find(i)!=mp.end()){
                v2[index]=mp.at(i);
                index++;
            }
        }
        return v2;

    }
};
