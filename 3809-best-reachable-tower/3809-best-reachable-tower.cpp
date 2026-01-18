#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {

        vector <int> result = {-1,-1};
        int qf = 0;

        for(int i = 0; i<towers.size(); i++)
            {
                int m_dist = abs(towers[i][0] - center[0]) + abs(towers[i][1] - center[1]);

                if(m_dist<=radius)
                {
                    if(towers[i][2] > qf)
                    {
                        result[0] = towers[i][0];
                        result[1] = towers[i][1];
                        qf = towers[i][2];                      
                    }
                    else if(towers[i][2] == qf)
                    {
                        if(result[0] == -1 ||
                        towers[i][0] < result[0] ||
                        (towers[i][0] == result[0] &&
                         towers[i][1] < result[1]))
                         {
                            result[0] = towers[i][0];
                            result[1] = towers[i][1];

                         }
                        
                    }
                }
               
            }
        return result;
        
    }
};