class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l=nums.size();
        //int r[l][l][l];
        set<vector <int>> s;
       vector<vector<int>> res;
       sort(nums.begin(),nums.end());
       //here we took length-2 because we want to check for triplets that means three indices so after completing last two we no need it makes our loop to itertate some more time ;
        for(int i=0;i<l-2;i++){
            int left=i+1;
            int right=l-1;
            //one is comming from that side and another one comming from anoter side 
            while(left<right){
           int sum=nums[i]+nums[left]+nums[right];
            if(sum==0){
                s.insert({nums[i],nums[left],nums[right]});
                left++;
                right--;
            }
            else if(sum<0){
                left++;
            }
            else{
                right--;
            }
            }

        }
        for(auto trip : s){
            res.push_back(trip);
        }
        return res;
    }
};