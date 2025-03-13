class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ar(nums.size()+1, 0);
    for(int i=0; i<nums.size(); i++){
        ar[nums[i]]++;
    }
    vector<int> res;
    for(int i=1; i<nums.size()+1; i++){
        if(ar[i] == 0){
            res.push_back(i);
        }
    }
    return res;
    }
};