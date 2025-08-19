class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        vector<int> arr;
        for(int &it: nums)
        {
            mp[it]++;
        }
        for(int i =1; i<=n; i++)
        {
            int freq=0;
            if(mp[i] == freq){
                arr.push_back(i);
            }
        }
        return arr;
    }
};