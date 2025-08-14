class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int finalxor = 0;
        for(int i=0; i<nums.size(); i++){
            finalxor = nums[i] ^ finalxor;
        }
        int cnt = 0;

        while(k || finalxor){

            if(k % 2 != finalxor %2){
                cnt++;
            }
            k /= 2;
            finalxor /= 2;
        }
        return cnt;
    }
};