class Solution {
public:
    int maxVowels(string s, int k) {

        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};

        int l = 0;
        int r = 0;
        int count = 0;
        int large = 0;

        while(r<s.size())
        {
            if(vowels.count(s[r])) count ++;

            if(r-l+1==k)
            {   
                large = max(large,count);
                if(vowels.count(s[l])) count--;

                l++;
            }

            r++;
        }

        return large;
        
    }
};