class Solution {
public:

        #define INF -1000000000

        int n,m;

        vector <int>A,B;

        int dp[505][505];

        int max(int a, int b)
        {
            return a>b?a:b;
        }
        
        //main recursive dp func
        int solve(int i, int j)
        {   
            //base case
            if(i==n||j==m) return INF; 

            if(dp[i][j]!=INF) return dp[i][j]; // i hv not computed these values yet


            int prod = A[i]*B[j];

            int take = max(prod,prod + solve(i+1,j+1));
            int skipA = solve(i+1,j);
            int skipB = solve(i,j+1);

            return dp[i][j] = max(take,max(skipA,skipB));
        }

    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {

        
        A=nums1;
        B=nums2;

        n = nums1.size();
        m = nums2.size();

        for(int i = 0; i<505;i++)
        {
            for(int j=0; j<505; j++)
            {
                dp[i][j] = INF;
            }
        }

        return solve(0,0);

    }
};