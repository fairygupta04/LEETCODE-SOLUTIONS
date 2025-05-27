// Problem: Reverse string
// Topic: Two pointers
// Link: https://leetcode.com/problems/reverse-string/
//Approach:
//->Initialize two pointers.One from the first index and second from the last index.
//->Run a loop and swap the elements pointed by the pointer.
//->Move the pointers.
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        
    }
};
