class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        int n = matrix.size();
        int m = matrix[0].size();
        int i, left = 0, right = m-1, down = n-1, up = 0;
        while( (left <= right) && (up <= down) ){

            for( i=left; i<=right; i++){
                res.push_back( matrix[up][i] );
            }
            up++;

            for(i = up; i<= down; i++){
            res.push_back( matrix[i][right] );
            }
            right--;

            if(up <= down){

            for(i = right; i>= left; i--){
              res.push_back( matrix[down][i] );
            }
            down--;

            }

            if(left <= right){
                
            for(i = down; i>= up; i--){
              res.push_back( matrix[i][left]);
            }
            left++;

            }
        }
        return res;
    }
};