/*
Given n, how many structurally unique BST's (binary search trees) that store values 1 ... n?

Example:

Input: 3
Output: 5
Explanation:
Given n = 3, there are a total of 5 unique BST's:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
*/

var numTrees = function(n) {
  let result = 0;
  if(n <= 1) return 1;
  for(let i = 0; i < n; i++){
      result += numTrees(i) * numTrees(n - i - 1);
  }
  return result;
};