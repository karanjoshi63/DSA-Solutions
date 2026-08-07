/*
Problem: Largest Element in an Array
Platform: GFG

Approach:
- Traverse the array once and keep track of the maximum element.

Time Complexity: O(n)
Space Complexity: O(1)
*/


class Solution {
public:
    int largestElement(vector<int>& nums) {

        int n = nums.size();
        int largest = nums[0];

        for(int i = 1; i < n; i++)
        {
            if(nums[i] > largest)
            {
                largest = nums[i];
            }
        }

        return largest;
    }
};
