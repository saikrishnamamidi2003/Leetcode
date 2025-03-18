class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
         int num = 0;
        int j = 0;
        int ans = 1;
        int n = nums.size();
        for(int i=0; i< n; i++){
            while((num & nums[i]) != 0){
                num = num ^ nums[j++];
            }
            num = num | nums[i];
            ans = max(ans, (i-j)+1);
        }
        return ans;
    }
};