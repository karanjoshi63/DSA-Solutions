/*
Given an array nums, determine whether it was originally sorted in non-decreasing order and then rotated some number of times.
A sorted and rotated array can have at most one point where the current element is greater than the next element, considering the array as circular.

for checking circuler element like last element to first element we have used modulus operator here 
there is one property % operator is if the numerator is smller then denominator then it gives same result
if numrator is equals to denominator then it gives 0 which is the first index of the array.

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
