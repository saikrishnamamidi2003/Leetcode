class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int maxiP = 0;
        int maxiN = 0; 
        int zero = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < 0){
                maxiN++;
            }
            else if(nums[i] == 0){
                zero++;
            }
            else break;
        }
        int n = nums.size();
        n -= (maxiN + zero);
        return (maxiN > n)? maxiN : n;
    }
};