class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        int n = queries.size();
        vector<int> result(n);
        unordered_map<int,int> ballmp;
        unordered_map<int,int> mp;
        for(int i =0; i<n; i++)
        {
            int ball = queries[i][0];
            int color = queries[i][1];
            if(ballmp.count(ball))
            {
                int prevcolor = ballmp[ball];
                mp[prevcolor]--;
                if(mp[prevcolor] == 0)
                {
                    mp.erase(prevcolor);
                }
            }
            ballmp[ball] = color;
            mp[color]++;
            result[i] = mp.size();
        }
        return result;
    }
};