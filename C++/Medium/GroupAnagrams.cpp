#include<vector>
#include<unordered_map>
using namespace std;
/*
Given an array of strings, group anagrams together.

Example:

Input: ["eat", "tea", "tan", "ate", "nat", "bat"],
Output:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
Note:

All inputs will be in lowercase.
The order of your output does not matter.
*/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> sortedLetters;
        for(string word : strs){
            string sorted = word;
            sort(sorted.begin(), sorted.end());
            sortedLetters[sorted].push_back(word);
        }
        vector<vector<string>> result;
        for(auto groups : sortedLetters){
            result.push_back(groups.second);
        }
        return result;
    }
};