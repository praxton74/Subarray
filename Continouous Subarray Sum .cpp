class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k)
    {
        int sum = 0, n = nums.size();
        unordered_map<int, int> map;
        map[0] = -1;
        for(int i = 0; i < n; i++)
        {
            sum += nums[i];
            sum %= k;
            if(map.find(sum) != map.end() && i - map[sum] >= 2)
                return true;
            if(map.find(sum) == map.end())
                map[sum] = i;
        }
        return false;
    }
};
