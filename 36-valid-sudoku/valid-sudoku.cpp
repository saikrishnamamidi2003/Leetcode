class Solution {
public:
    bool isvalid(int row, int col, char c,vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            if((board[row][i]) == c) return false;
            if((board[i][col]) == c) return false;

            //to surround that grid only ---..
            if((board[((3 * (row / 3)) + i/3)][((3 * (col/3)) + (i%3))]) == c ) return false;
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(board[i][j] == '.') continue;
                char c = board[i][j];
                board[i][j] = '.';
               if(!isvalid(i, j, c, board) ) {
                    cout<<c <<" " <<i <<" "<<j<<endl;
                    return false;
               }
               board[i][j] = c;
            }
        }
        return true;
    }
};