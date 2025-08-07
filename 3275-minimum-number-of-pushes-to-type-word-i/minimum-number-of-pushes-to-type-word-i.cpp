class Solution {
public:
    int minimumPushes(string word) {
        int result = 0;
        unordered_map<int,int> mp;
        int assignvalue = 2;
        for(char &ch: word)
        {
            if(assignvalue > 9)
            {
                assignvalue = 2;
            }
            mp[assignvalue]++;
            result += mp[assignvalue];
            assignvalue++;
        }
        return result;
    }
};