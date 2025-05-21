class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int l=matrix.size();
        int c=matrix[0].size();
     //   bool row[l]=false,col[l]=false;
        // bool row[l],col[l];
        vector<bool> row(l,false);
        vector<bool> col(l,false);
        vector<int> r;
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j]==0){
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        for(int i=0;i<l;i++){
            for(int j=0;j<c;j++){
                if(row[i]==true || col[j]==true){
                    matrix[i][j]=0;
                }
            }
        }
        

    }
};