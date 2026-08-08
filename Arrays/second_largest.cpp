/*
Approach
Keep track of the largest and secondLargest elements.
Traverse the array only once.
Update both values whenever a larger element is found.
Ignore duplicate values of the largest element.
  */

class Solution {
public:
    int secondLargest(vector<int>& nums) {
        int largest = INT_MIN;
        int second = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > largest) {
                second = largest;
                largest = nums[i];
            }
            else if (nums[i] > second && nums[i] != largest) {
                second = nums[i];
            }
        }

        return second;
    }
};
