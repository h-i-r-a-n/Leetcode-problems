class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {

        /*
        int count = 0;
        int i=0;
        while(i!=nums.size()-1)
            {
                if(nums[i]<nums[i+1]) count++;

                if(nums[i]==nums[i+1]) count = 0;
                
                i++;
            }
        
        int result = nums.size()-count-1;
        return result;
        */

        int n = nums.size();
        int i = n-1;

        while(i>0 && nums[i-1]<nums[i])
            {
                i--;
            }

        return i;
        
    }
};