class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double maxi=0;
        int area=0;
        for(int i=0;i<dimensions.size();++i){
            int l=dimensions[i][0];
            int b=dimensions[i][1];
            double ans =(sqrt((l*l)+(b*b)));
                if(ans>maxi || (ans == maxi && l * b>area)){
                    maxi=ans;
                    area=l*b;
                }
        }
        return area;
    }
};