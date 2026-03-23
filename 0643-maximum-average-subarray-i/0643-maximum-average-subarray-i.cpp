class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int sum = 0;

        for(int i=0; i<k; i++)
        {
            sum+=nums[i];
        }

        double maxAvg = (double)sum/k;

        for(int i = k;i<nums.size(); i++)
        {
            sum+=nums[i];
            sum-=nums[i-k];

            double avg = (double)sum/k;
            if(avg>maxAvg) maxAvg = avg;
        }

        return maxAvg;
        
    }
};