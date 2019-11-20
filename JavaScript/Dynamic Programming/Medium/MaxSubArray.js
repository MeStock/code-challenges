/*
Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
 */

var maxSubArray = function(nums) {
  if(nums.length < 2) return nums;
  let max = nums[0];
  let nextNum = 0;
  for(let i = 0; i < nums.length; i++){
      nextNum = Math.max(nextNum + nums[i], nums[i]);
      max = Math.max(nextNum, max);
  }
  return max;
};