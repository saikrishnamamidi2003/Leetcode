class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int cnt = 0;
        int n = mat.size();
        int m = mat[0].size();
        int i = 0, j = 0;
        bool ent = false;
        int icnt = 0;
        bool downToUp = true;
        vector<int> res;
        while(true){
            vector<int> temp;
            j = cnt;
            i = icnt;
            while(i < n && j >= 0 ){
                temp.push_back(mat[i][j]);
                i++;
                j--;
            }

            if(downToUp){
                for(int i=temp.size()-1; i>=0; i--){
                    res.push_back(temp[i]);
                }
            }
            else{
                for(int i=0; i<temp.size(); i++){
                    res.push_back(temp[i]);
                }
            }

            downToUp = !downToUp;

            if(cnt == m-1){
                icnt++;
            }
            if(cnt != m-1)
                cnt++;
            if(icnt == n){
                break;
            }
        }

        return res;
    }
};