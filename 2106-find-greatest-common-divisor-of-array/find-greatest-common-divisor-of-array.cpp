class Solution {
public:
    int gcd(int a,int b){
        if(a==0) return b;
        if(b==0) return a;

        while(a>0 && b>0){
            if(a>b) a=a-b;
            else b=b-a;
        }

        if(a==0) return b;
        if(b==0) return a;
        return a;
    }


    int findGCD(vector<int>& nums) {
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
            if(nums[i] < mini){
                mini = nums[i];
            }
        }
        return gcd(maxi,mini);
    }
};