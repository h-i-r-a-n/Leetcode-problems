class Solution {
public:
    int countMonobit(int n) {

        
        long long count = 0;
        for(int i = 0; i<=n; i++)
            {
                string bit = format("{:b}",i);

                if(bit.size()==1) count++;
                else
                {
                    char ch = bit[0];
                    int j = 0;
                    bool ok  = true;
                    while(j!=bit.size())
                        {
                            if(bit[j]!=ch)
                            {
                                ok = false;
                                break;
                            } 
                            
                            j++;
                        }
                    if(ok) count++;
                }
            }
        return count;

    }
};