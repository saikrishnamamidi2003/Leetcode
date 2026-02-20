class Solution {
    public int maxProfit(int[] prices) {
        int maxi = prices[0];
        int mini = prices[0];
        int sum = 0;
        for(int i=1; i<prices.length; i++){
            if(prices[i] < maxi){
               sum +=  (maxi - mini);
                mini = prices[i];
                maxi = prices[i];
            }
            else {
                maxi = prices[i];
                if(i == prices.length-1){
                    sum +=  (maxi - mini);
                }
            }
        }
        return sum;
    }
}