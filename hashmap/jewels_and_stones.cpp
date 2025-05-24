// Problem: Two Sum
// Topic: HashMap
// Link: https://leetcode.com/problems/jewels-and-stones/
//Approach:
//->For each character in 'stones',store the (char,freq) in the map.
//->Then for each character in 'jewels',check if it exists in the map.
//->If it does,add the frequency to the total count.
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        unordered_map<char,int>freq;
        for(char ch:stones){
            freq[ch]++;
        }
        for(char ch:jewels){
            if(freq.find(ch)!=freq.end()){
                count=count+freq.at(ch);
            }
        }
        return count;
    }
};
