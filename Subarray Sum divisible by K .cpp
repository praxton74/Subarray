class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        unordered_map<int, int> rem_count;
        rem_count[0] = 1;
        
        int ans = 0, currSum = 0;
        
        for(int i=0; i<nums.size(); i++){
            currSum += nums[i];
            
            int rem = currSum %k;
            if(rem<0) rem += k;
            
            if(rem_count.find(rem) != rem_count.end()){
                ans += rem_count[rem];
            }
            
            rem_count[rem]++;
        }
        return ans;
    }
};
