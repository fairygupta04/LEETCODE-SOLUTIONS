// Problem: Valid Palindrome
// Topic: Two pointers
// Link: https://leetcode.com/problems/valid-palindrome/
//Approach:
//->Create a new string and store the original string in it after removing non-alphanumeric characters and converting it to lowercase.
//->Initialize two pointers.One from the start and another from the end.
//->Run a loop and compare the characters pointed by the pointer.
//->If not equal,return false.
class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for(char c : s){
            if(isalnum(c)){
                cleaned+=(char)tolower(c);
            }
        }
        int n=(cleaned.size()/2);
        int j=cleaned.size()-1;
        for(int i=0;i<n;i++){
            if(cleaned[i]!=cleaned[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};
