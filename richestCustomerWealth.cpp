class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int sum = 0, maxWealth = 0;
        for(char i = 0; i < accounts.size(); i++)
        {
            for(char j = 0; j < accounts[i].size(); j++)
            {
                sum += accounts[i][j];
            }
            if (sum >= maxWealth) maxWealth = sum;
            sum = 0;
        }
        return maxWealth;
    }
};