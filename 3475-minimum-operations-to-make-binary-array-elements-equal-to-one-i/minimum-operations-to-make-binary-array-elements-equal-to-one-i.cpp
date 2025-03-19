class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0;
        for(int i=0; i<nums.size()-2; i++){
            if(nums[i] == 0){
                nums[i] = 1;
                nums[i+1] = !nums[i+1];
                nums[i+2] = !nums[i+2];
                cnt++;
            }
        }
        for(int i=0 ; i<nums.size(); i++){
            if(nums[i] == 0){
                return -1;
            }
        }
        return cnt;
    }
};