/*
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.
*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int n = nums.size();
        k = k%n;
        vector<int>ans(n);
        int l = 0;
        for(int i =n-k; i<n; i++)
        {
            ans[l] = nums[i];
            l++;
        }
       

        for(int i =0; i<n-k; i++)
        {
            ans[l] = nums[i];
            l++;
        }

        nums = ans;

       
        
    }
};
