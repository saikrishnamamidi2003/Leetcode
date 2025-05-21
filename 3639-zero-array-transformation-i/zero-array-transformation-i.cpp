class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> dv(nums.size()+1, 0);
        for(const auto &q : queries){
            int left = q[0];
            int right = q[1];
            dv[left] += 1;
            dv[right+1] -= 1;
        }
        vector<int> oc;
        int op = 0;
        for(int i : dv){
            op += i;
            oc.push_back(op);
        }
        for(int i=0; i<nums.size(); i++){
            cout<<oc[i]<<endl;
            if(oc[i] < nums[i]) return false;
        }
        return true;
    }
};