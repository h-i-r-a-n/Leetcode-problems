class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {

        vector<long long> st;

        for(long long x : nums)
        {
            st.push_back(x);

            // keep merging while last two equal
            while(st.size() >= 2 &&
                  st[st.size()-1] == st[st.size()-2])
            {
                long long val = st.back();
                st.pop_back();
                st.back() += val;
            }
        }

        return st;
    }
};
