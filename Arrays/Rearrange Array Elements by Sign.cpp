/*
  In this queation we have rearange array elements by there sign
  example:-
  Input: nums = [3,1,-2,-5,2,-4]
  Output: [3,-2,1,-5,2,-4]


The positive integers in nums are [3,1,2]. The negative integers are [-2,-5,-4].
The only possible way to rearrange them such that they satisfy all conditions is [3,-2,1,-5,2,-4].

so we have rearrage them in sucha  a manner that a positive interger should me before negative and 
a negative integer before positive.
but first element will be postive.

T.C = O(N)
S.C = O(N).
*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        vector<int>ans(n);
        int j = 0;
        int k = 1;
        for(int i = 0; i<n; i++)
        {
            if(nums[i]>0)
            {
                ans[j] = nums[i];
                j+=2;
            }

            else
            {
                ans[k] = nums[i];
                k+=2;
            }
        }

        return ans;
    }
};
