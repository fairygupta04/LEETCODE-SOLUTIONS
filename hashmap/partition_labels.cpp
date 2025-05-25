// Problem: Partition Labels
// Topic: Greedy and Hashing
// Link: https://leetcode.com/problems/partition-labels/
//Approach:
//->Store the last index of each character.
//->Traverse the string while tracking the farthest last index seen.
//->When the current index matches last, cut the partition.
//->Add partition size to result and update start for the next one.
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ptt;
        vector<int>end(26);
        for(int i=0;i<s.size();i++){
            end[s[i]-'a']=i;
        }
        int last=0;
        int start=0;
        for(int i=0;i<s.size();i++){
            last=max(last,end[s[i]-'a']);
            if(last==i){
                ptt.push_back(i-start+1);
                start=i+1;
            }
        }
        return ptt;
    }
};
