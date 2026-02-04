class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {

        unordered_set<int> max;
        int count = 0;
        for(int i = 0; i<nums.size(); i++)
            {
                if(nums[i]!=target[i])
                {
  
                    {
                       max.insert(nums[i]);
                    }
                }
            }
        return max.size();
        
    }
};