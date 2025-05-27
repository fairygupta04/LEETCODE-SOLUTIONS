// Problem: Valid Anagram
// Topic: Hash map
// Link: https://leetcode.com/problems/valid-anagram/
//Approach:
//->If the lengths are different,return false.
//->Store the string s in hashmap.
//->Try to find the characters of string t from the hashmap and decrease the count of frequency by 1.
//->Also if the value of a certain key is 0,erase it.
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        unordered_map<char,int>mp;
        for(char ch:s){
            mp[ch]++;
        }
        for(char ch:t){
            if(mp.find(ch)!=mp.end()){
                mp.at(ch)--;
                if(mp.at(ch)==0){
                    mp.erase(ch);
                }
            }
            else return false;
        }
        //if(!mp.empty())
       // return false;

    return true;
    }
};
