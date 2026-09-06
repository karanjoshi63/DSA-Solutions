/*
  In this question what we have to do is you want to maximize your profit by choosing a single day to buy one stock
  and choosing a different day to sell this stock and you must have maximum profit by selling it

  like arr = [7,1,5,3,6,4]
  in this array if you buy a stock on 1th day whose value is 1 and sell it on the day whose value is 6
  then you will have a profit of 5 and this is the maximum profit in this array.

  Approach:-
  -> for this you have to track the minimum element of the array and then find the profit by subracting it by value of selling day.
  -> then store the maximum profit (profit = arr[i]-mini).
  -> then store minimum for next time to  findi the profit.

  Time complexity = O(N)
  Space complexity = O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& nums) {

        int n = nums.size();

        int mini = nums[0], profit = 0;

        for(int i = 1; i<n; i++)
        {

            int cost = nums[i] - mini;
            profit = max(profit , cost);
            mini = min(mini , nums[i]);
            
        }

        return profit;
        
    }
};
