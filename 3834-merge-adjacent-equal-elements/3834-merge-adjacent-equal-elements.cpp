class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {

        int n = nums.size();
        
        vector<long long> stack;

        for(int i = 0; i<n; i++)
        {
            stack.push_back(nums[i]);

            while(stack.size()>=2 && stack[stack.size()-1] == stack[stack.size()-2])
            {
                long long val = stack.back();
                stack.pop_back();
                stack.back()+=val;
            }
        }

        return stack;
        
    }
};