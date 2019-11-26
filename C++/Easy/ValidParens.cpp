#include <stack>
using namespace std;
/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true
*/
class Solution {
public:
    stack<char> matchingPairs;
    bool isValid(string s) {
        if(s.length() == 1) return false;
        for(char c : s){
            if(c == '('){
                matchingPairs.push(')');
            }
            else if(c == '{'){
                matchingPairs.push('}');
            }
            else if(c == '['){
                matchingPairs.push(']');
            }
            else if(matchingPairs.empty() || matchingPairs.top() != c){
                return false;
            }else{
                matchingPairs.pop();
            }
        }
        if(!matchingPairs.empty()) return false;
        return true;
    }
};