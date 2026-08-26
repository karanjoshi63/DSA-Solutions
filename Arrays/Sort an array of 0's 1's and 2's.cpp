/*
In this question we to rearrange array elements in the form of 0 1 2 
let me explain:
all the 0s should be on left side
all the 1's should be on middle 
all the 2's should be on right side of the array

solution::-
for this my solution is Duth national flag algorithm
in this algo we maintains three low , mid, high variables in such a manner 
elements from low to mid-1 will be 0 
elements from mid to high-1 will be 1
and elements from high to n will be 2

*/

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int n = nums.size();
        int low =0;
        int mid = 0;
        int high = n-1;

        while(mid<=high)
        {
            if(nums[mid] == 0)
            {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
                
            }

            else if(nums[mid]==1)
            {
                mid++;
            }

            else
            {
                swap(nums[mid],nums[high]);
                high--;
                
            }
        }
        
    }
};
