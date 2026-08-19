class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int n = nums.size();

        int count = 0;
        int count1 =0;

        for(int i =0; i<n; i++)
        {
            if(nums[i] == 1)
            {
                count1++;
            }


            else 
            {
                if(count1>count)
                {
                    count = count1;
                    
                }
                count1 = 0;
            }



        }

        if(count1>count)
            count = count1;
            return count;
        
    }
};
