class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int maxi = -1;
        for(int i=nums.size()-1; i > 0; i--){
            for(int j=i-1; j>=0; j--){
                if(nums[i] == nums[j]){
                    if(j > maxi)
                        maxi = j;
                    break;
                }
            }
        }
        int ans = 0;
        //return maxi;
        if(maxi != -1){
            int rem = (maxi+1) % 3;
            //return rem;
            if(maxi == 0) ans = 1;
            else if((rem) == 0){ ans += (maxi+1) / 3; }
            else ans += ((maxi+1) / 3) + 1;
        }
return ans;
    }
};