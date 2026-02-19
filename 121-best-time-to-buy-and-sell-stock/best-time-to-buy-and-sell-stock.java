class Solution {
    public int maxProfit(int[] prices) {
        int mini = Integer.MAX_VALUE;
        int maxi = 0;
        for(int i=0; i<prices.length; i++){
            if(prices[i] < mini){
                mini = prices[i];
            }
            else {
                maxi = Math.max(prices[i] - mini, maxi);
            }
        }
        return maxi;
    }
}