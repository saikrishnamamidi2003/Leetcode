class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int  n = grid.size();
        int m = grid[0].size();
      int i=0;
      int j = 0;
      int tj = m-1;
      int ti = 0;
      while(true){ 
        j = tj;
        i = ti;
       int ri = ti;
       int rj = tj;  cout<<"ti "<<ti<<" tj "<<tj<<endl;
       vector<int> res;
        while(i < n && j < m){
            res.push_back(grid[i][j]);
            cout<<" i "<<i<<" j "<<j<<endl;
            j++;
            i++;
        }
        if(i == n){
            sort(res.begin(), res.end(), greater<int>());
        }
        else{
            sort(res.begin(), res.end());
        }
        int r = 0;
        while(ri < n && rj < m){
            grid[ri][rj] = res[r++];
            ri++;
            rj++;
        }

        tj -= 1;
        if(tj < 0){
            tj = 0;
        }
        if(i == n){
            ti += 1;
        }

        if(i == n && j ==0) break;
      }

      return grid;   
    }
};