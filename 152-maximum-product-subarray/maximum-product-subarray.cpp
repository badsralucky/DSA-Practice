class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi =  nums[0];
        int mini = nums[0];
        int ans = nums[0];
        for(int i = 1;i<n;i++){
            int x =  nums[i];
            int currMax = max({x,x*maxi , x*mini});
            int currMin= min({x, x*maxi , x*mini });

            maxi = currMax;
            mini = currMin;

            ans =  max(ans , maxi);
        }
        return ans;

    }
};