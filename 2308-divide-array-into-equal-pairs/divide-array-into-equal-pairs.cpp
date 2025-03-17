class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        if(n%2 != 0) return false;
        sort(nums.begin(), nums.end());
        int sum = 0;
       for(int i=0; i<n; i++){
            if(i % 2 == 0){
                sum += nums[i];
            }
            else sum -= nums[i];
       }
       return sum == 0;
    }
};