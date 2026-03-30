class Solution {
public:
    const int MOD = 1e9 + 7;

    long long power(long long base, long long exp, long long mod) {
        long long result = 1;
        base %= mod;
        while (exp > 0) {
            if (exp & 1) result = result * base % mod;
            base = base * base % mod;
            exp >>= 1;
        }
        return result;
    }

    long long modInverse(long long a, long long mod) {
        return power(a, mod - 2, mod);
    }

    long long C(int n, int r, vector<long long>& fact) {
        if (r <0|| r > n) return 0;
        return fact[n] % MOD
             * modInverse(fact[r], MOD) % MOD
             * modInverse(fact[n - r], MOD) % MOD;
    }

    int countVisiblePeople(int n, int pos, int k) {
        int left = pos;
        int right = n - pos - 1;

        vector<long long> fact(n + 1);
        fact[0] = 1;
        for (int i = 1; i <= n; i++)
            fact[i] = fact[i - 1] * i % MOD;

        long long ans = 0;
        for (int j = 0; j <= k; j++)
            ans = (ans + C(left, j, fact) * C(right, k - j, fact)) % MOD;

        return (int)(ans * 2 % MOD);
    }
};