class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        vector<int> a(51, 0);
        for(int i=0; i<nums.size()-k+1; i++){
            unordered_set<int> s;
            for(int j=i; j<i+k; j++){
                s.insert( nums[j] );
            }
            for(int j : s){
                a[j] += 1;
            }
        }
        int maxi = -1;
        for(int i =50; i >= 0; i--){
            if(a[i] == 1){
                return i;
            }
        }
        return maxi;
    }
};