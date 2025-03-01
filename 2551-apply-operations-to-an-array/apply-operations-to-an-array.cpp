class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int l = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){

            if( i+1 != nums.size() && nums[i] == nums[i+1]){
                int t = nums[i]*2;
                res[l] = t;
                l++;
                nums[i+1] = 0;
            }
            else{
                res[l]  = nums[i];
                l++;
            }

            }
        }
        return res;
    }
};