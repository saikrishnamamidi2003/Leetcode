class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        set<int> st;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        int n = nums.size();
        int sz = st.size();
        int ans = 0;
        map<int, int> mp;
        int j = 0, i=0;
        while(i < nums.size()){
            mp[nums[i]]++;
            while(mp.size() == sz){
                ans += (n-i);
                mp[nums[j]]--;
                if(mp[nums[j]] == 0){
                    mp.erase(nums[j]);
                }
                j++;
            }
            i++;
        }
        return ans;
    }
};