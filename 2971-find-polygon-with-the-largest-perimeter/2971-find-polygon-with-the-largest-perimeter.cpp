using namespace std;
class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        
        long long result  = -1;
        long long total = 0;

        for(int i = 0; i<nums.size(); i++)
        {
            if(total>nums[i])
            {
                result = total+nums[i];
            }

            total+=nums[i];
        }

        return result;


        
        
    }
};