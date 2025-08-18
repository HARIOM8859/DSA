class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> mp(k,0);
        for(int &it: arr)
        {
            int rem = (it%k + k)%k;
            mp[rem]++;
        }
        if(mp[0] %2 != 0)
        {
            return false;
        }
        for(int rem = 1; rem<=k/2; rem++)
        {
            int chalf = k-rem;
            if(mp[chalf] != mp[rem])
            {
                return false;
            }
        }
        return true;
    }
};