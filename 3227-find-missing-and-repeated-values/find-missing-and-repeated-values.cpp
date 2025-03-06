class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int> res(2);
        int n = grid[0].size();
        int sq = n*n;
        //int arr[(sq)+1] = {0}; //unsupported
        vector<int> arr(sq+1, 0);

        for(auto i : grid){
            for(int j : i){
                arr[j]++;
            }
        }

        for(int i=1; i<( (sq) +1); i++){
            cout<<arr[i]<<" ";
            if(arr[i] == 2){
                res[0] = i;
            }
            if(arr[i] == 0) 
                res[1] = i;
        }
        return res;
    }
};