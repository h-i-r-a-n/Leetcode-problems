class Solution {
public:
    long long countCommas(long long n) {
        
        if (n<1000) return 0;
        
        long long res = 0, p;

        for(p = 1000; p<=n; p*=1000)
        {
            res += (n-p+1);

        }
        
        return res;
    }
};