class Solution {
public:

    vector<int> ncr(int row){
        long res=1;
        vector<int> ans;
        ans.push_back(1);
        for(int i=0;i<row;i++){
            res=res*(row-i);
            res=res/(i+1);
            ans.push_back(res);
        }
        return ans;

    };
    vector<vector<int>> generate(int numrows) {
        vector<vector<int>> res;
        for(int i=0;i<numrows;i++){
            res.push_back(ncr(i));
        }
        return res;
        
    }
};