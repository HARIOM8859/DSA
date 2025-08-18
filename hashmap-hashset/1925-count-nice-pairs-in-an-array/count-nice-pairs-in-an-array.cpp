class Solution {
public:
    int rev(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit; 
        num /= 10;                 
    }
    return reversed;
} 
    int countNicePairs(vector<int>& nums) {
        long long count = 0;
        const int mod = 1e9 + 7;
        unordered_map<int,int> mp;
        for(int &i:nums)
        {
           int diff = i - rev(i);
           count = (count+mp[diff])%mod;
           mp[diff]++;
        }
        return (int)count;
    }
};