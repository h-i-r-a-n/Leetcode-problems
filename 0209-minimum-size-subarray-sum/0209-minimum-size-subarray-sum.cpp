class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int l = 0;
        int r = 0;
        int currsum = 0;

        int minlen = INT_MAX;

        for(r=0; r<nums.size(); r++)
        {
            currsum += nums[r];
            
            while(currsum>=target)
            {
                if(r-l+1<minlen)
                {
                    minlen = r-l+1;
                }
                currsum -= nums[l];
                l++;
            }
        }

        return (minlen == INT_MAX)?0:minlen;

        
    }
};