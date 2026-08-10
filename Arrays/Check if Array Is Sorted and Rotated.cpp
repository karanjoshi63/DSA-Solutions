/*
Given an array nums, determine whether it was originally sorted in non-decreasing order and then rotated some number of times.
A sorted and rotated array can have at most one point where the current element is greater than the next element, considering the array as circular.
Example
*/

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for(int i =0; i<n; i++)
        {
            if(nums[i]>nums[(i+1)%n])
            {
                count++;
            }
        }

        return count<=1;
        
    }
};
