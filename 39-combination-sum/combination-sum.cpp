class Solution {
public:

    void findComb(vector<int> &ds, vector<vector<int>> &ans, vector<int> can, int target, int ind, int sum){
        if(ind == can.size()){
            if(sum == target){
                ans.push_back(ds);
            }
            return;
        }

        if( (sum + can[ind]) <= target ){
            ds.push_back(can[ind]);
        findComb(ds, ans,can, target, ind, (sum + can[ind]));
            ds.pop_back();
        }
        findComb(ds, ans,can, target, ind+1, sum);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        findComb(ds, ans, candidates, target, 0, 0);
        return ans;
    }
};