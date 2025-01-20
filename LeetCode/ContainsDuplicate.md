# Contains Duplicate
---
## Problem 
[217. Contains Duplicate](https://leetcode.com/problems/contains-duplicate)
Given an integer array `nums`, determine if any value appears at least twice in the array. Return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

## Problem Explanation
The task requires checking if an array contains any duplicate elements. This means:
- We need to compare each element with every other element
- If we find any two elements that are equal, we've found a duplicate
- If we check all possible pairs and find no duplicates, all elements are unique

Examples:
```
Input: nums = [1,2,3,1]
Output: true
Explanation: '1' appears twice

Input: nums = [1,2,3,4]
Output: false
Explanation: All elements are distinct

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
Explanation: Both '3' and '4' appear multiple times
```

## Solution
```c
bool containsDuplicate(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}
```

## Solution Explanation
The solution uses a nested loop approach:
1. Outer loop (`i`): Selects each element in the array one by one
2. Inner loop (`j`): Compares the selected element with all subsequent elements
   - Starts from `i + 1` to avoid comparing an element with itself
   - Continues until the end of array
3. If any match is found (`nums[i] == nums[j]`), returns `true`
4. If no matches are found after checking all pairs, returns `false`

## Time and Space Complexity
- Time Complexity: O(n²)
  - Uses nested loops
  - For each element, compares with all remaining elements
  - Worst case: checks n*(n-1)/2 pairs
- Space Complexity: O(1)
  - Uses only a constant amount of extra space
  - No additional data structures needed

## Notes
1. Constraints:
   - The solution works for any array size
   - Can handle any integer values
   - No special handling needed for empty arrays (will return false)

2. Optimization Possibilities:
   - Could be optimized using sorting (O(n log n))
   - Could use a hash table for O(n) time complexity
   - Current solution prioritizes space efficiency over time efficiency

3. Trade-offs:
   - Simple to implement and understand
   - Works without extra memory
   - Not the most time-efficient solution for large arrays
