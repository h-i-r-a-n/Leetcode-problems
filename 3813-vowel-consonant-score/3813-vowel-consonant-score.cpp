class Solution {
public:
    int vowelConsonantScore(string s) {

        int v = 0;
        int c = 0;

        for(int i = 0; i<s.size();i++)
            {
                if(isalpha(s[i]))
                {
                    
                
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                {
                    v++;
                    //std::cout<<"Vowel"<<s[i];
                }
                else
                {
                    c++;
                    //std::cout<<"Consonant"<<s[i];
                }

                }
            }
        //std::cout<<"Vowel:"<<v;
        //std::cout<<"Cons:"<<c;

        if(c>0)
        {
            int score = v/c;
            return score;
        }
        else
        {
            return 0;
        }
        
        
        
    }
};