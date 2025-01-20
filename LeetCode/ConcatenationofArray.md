# Array Concatenation

## Problem
[1929. Concatenation of Array](https://leetcode.com/problems/concatenation-of-array/submissions/1514872982/)

Given an integer array `nums` of length `n`, create an array `ans` of length `2n` where:
- `ans[i] == nums[i]` 
- `ans[i + n] == nums[i]` for `0 <= i < n` (0-indexed)

The task is to create `ans` as the concatenation of two `nums` arrays.

## Problem Explanation
The problem asks us to:
1. Take an input array and duplicate its contents
2. Combine the original array and its duplicate into a single array
3. Maintain the order so that the entire array appears twice consecutively

Example:
```
Input: nums = [1,2,1]
Output: [1,2,1,1,2,1]

Input: nums = [1,3,2,1]
Output: [1,3,2,1,1,3,2,1]
```

## Solution in C
```c
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int* ans = (int*)malloc(*returnSize * sizeof(int));
    if (ans == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i < numsSize; ++i) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[i];
    }
    return ans;
}
```

## Solution Explanation
The solution works in the following steps:
1. Create new array of double size (`2n`)
2. For each index `i` in the original array:
   - Copy `nums[i]` to `ans[i]` (first half)
   - Copy `nums[i]` to `ans[i + numsSize]` (second half)
3. Return the new array

The solution uses a single loop to efficiently copy elements to both positions simultaneously.

## Time and Space Complexity
- Time Complexity: O(n)
  - Single pass through the input array
  - Each element is copied twice in the same loop
- Space Complexity: O(n)
  - Creates new array of size 2n
  - No additional space used beyond the required output array

## Notes
1. Constraints:
   - `1 <= nums.length <= 1000`
   - `1 <= nums[i] <= 1000`

2. Memory Management:
   - Function uses dynamic memory allocation
   - Caller must free the returned array
   - Includes error handling for memory allocation failure

3. Implementation Details:
   - 0-based indexing
   - Input array remains unchanged
   - Returns pointer to new array
