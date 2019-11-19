/*
Given an integer array with no duplicates. A maximum tree building on this array is defined as follow:

The root is the maximum number in the array.
The left subtree is the maximum tree constructed from left part subarray divided by the maximum number.
The right subtree is the maximum tree constructed from right part subarray divided by the maximum number.
Construct the maximum tree by the given array and output the root node of this tree.

Example 1:
Input: [3,2,1,6,0,5]
Output: return the tree root node representing the following tree:

      6
    /   \
   3     5
    \    / 
     2  0   
       \
        1
*/

var constructMaximumBinaryTree = function(nums) {
  if(nums.length === 0){
      return null;
  }
  let max = Math.max(...nums);
  let left = nums.slice(0, nums.indexOf(max));
  let right = nums.slice(nums.indexOf(max)+1, nums.length);
  let root = new TreeNode(max);
  root.left = constructMaximumBinaryTree(left);
  root.right = constructMaximumBinaryTree(right);
  return root;
};