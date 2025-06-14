class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mini = 0;
        int prv = 0;
        int ans = INT_MIN;
       for(int i=0; i<nums.size(); i++){
            int cur = max(prv, 0) + nums[i];

            if(cur > ans){
                ans = cur;
            }
            prv = cur;

       } 
       return ans;
    }
};