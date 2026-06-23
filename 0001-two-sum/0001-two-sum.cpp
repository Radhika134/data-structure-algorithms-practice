class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int x = target-nums[i];
            if(mp.find(x)!=mp.end())
            {
                return{mp[x],i};
            }
            else
            {
                mp[nums[i]] = i;
            }
        }

return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna