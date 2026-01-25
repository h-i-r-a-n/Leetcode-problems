class Solution {
public:
    vector<int> rotateElements(vector<int>& nums, int k) {

        vector<int> values;
        vector<int> positions;

        for(int i=0;i<nums.size();i++)
            {
                if(nums[i]>=0)
                {
                    values.push_back(nums[i]);
                    positions.push_back(i);
                }
            }

        int n = values.size();

        if(n==0) return nums;

        k=k%n;

        rotate(values.begin(),values.begin()+k,values.end());


        for(int i=0;i<n;i++)
            {
                nums[positions[i]] = values[i];
            }

        return nums;
        
        
    }
};