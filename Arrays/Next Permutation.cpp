/*
#Next Permutation
in this question 
Given an array of integers, rearrange the elements into the next lexicographically greater permutation.

If the array is already the largest possible permutation, rearrange it into the smallest possible permutation(sorted in ascending order).

 Example
Input:  [1, 2, 3]
Output: [1, 3, 2]

Input:  [3, 2, 1]
Output: [1, 2, 3]

Since [3,2,1] is already the largest permutation, we return the smallest permutation.


 Approach:-

The solution can be done in **O(n)** time using the following steps:

 1. Find the Break Point

Traverse the array from right to left and find the first index i` such that:
nums[i] < nums[i + 1]

This index is called the break point.

For example:

[1, 2, 5, 4, 3]
    
here the break point is 2
Here:
2 < 5
So the break point is at index `1`.

2. find the next greater element:-

If a break point exists, traverse from the right side and find the first element greater than nums[i].
Because the right part is in decreasing order, the first suitable element from the right will be the smallest element greater than `ums[i].

For
[1, 2, 5, 4, 3]
The element greater than `2` from the right is `3`.

Swap them:
[1, 3, 5, 4, 2]

3. Reverse the Right Part

After swapping, reverse the portion of the array after the break point.


[1, 3, 5, 4, 2]
       -----

After reversing:


[1, 3, 2, 4, 5]
This gives the next lexicographically greater permutation.


Edge Case:-

If no break point is found, the array is already in **descending order**, meaning it is the largest permutation.

Example:
[3, 2, 1]


There is no index where:
nums[i] < nums[i + 1]


So we simply reverse the entire array:
[1, 2, 3]




Complexity

 ->Time Complexity:O(n)
 ->pace Complexity:O(1)


1. Find the first position where we can increase the number.
2. Swap it with the smallest greater element on its right.
3. Arrange the remaining elements in the smallest possible order.



*/


class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int ind = -1;
        int n = nums.size();

        for(int i = n-2; i>=0; i--)
        {
            if(nums[i]<nums[i+1])
            {
                ind = i;
                break;
            }
        }

        if(ind == -1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i = n-1; i>ind; i--)
        {
            if(nums[i]>nums[ind])
            {
                swap(nums[i],nums[ind]);
                break;
            }
        }        


        reverse(nums.begin()+ind+1 , nums.end());

        return;
    }
};
