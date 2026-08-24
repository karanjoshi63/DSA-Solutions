/*in this problem we have to find two numbers whose sum is equale to given number
so i have use map here because i have to track remaining number
we also one more optimal solution :
if we have sorted array given the we can apply two pointers approach here 
but in this leetcode question array is not sorted and if i have to sort the array then the time complexity would be 
O(NlogN) 

the timeplexity of my soloution is = O(N);
the space comoplexity of solution is = O(N);
*/



class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        int n  = nums.size();
        for(int i =0; i<n; i++)
        {
            int num = nums[i];
            int req = target-num;
            if(mp.find(req)!=mp.end())
            {
                return {mp[req],i};
            }

            mp[num] = i;
        }
        return {};
        
       
    }
};
