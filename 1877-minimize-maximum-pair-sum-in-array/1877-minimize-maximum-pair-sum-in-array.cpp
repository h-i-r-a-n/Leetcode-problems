using namespace std;
class Solution {
public:
    int minPairSum(vector<int>& nums) {

        vector<int> sum;

        sort(nums.begin(),nums.end());

        int n=nums.size();

        int i=0;
        int j=n-1;

        while(i<j)
        {
            sum.push_back(nums[i]+nums[j]);
            i++;
            j--;
        }

        int large=0;
        for(int x=0;x<sum.size();x++)
        {
            if(sum[x]>large) large = sum[x];
        }

        return large;
        
        
    }
};