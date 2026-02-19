class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length == 1){
            return 1;
        }
       int j = 0;
       int cnt = 1;
       for(int i=0; i< nums.length-1; i++){
            if(nums[i] == nums[i+1]){
                cnt++;
                if(cnt == 2){
                    nums[j++] = nums[i];
                    nums[j++] = nums[i+1];
                }
            }
            else{
                if(cnt == 1){
                    nums[j++] = nums[i];
                }
                if(i+1 == nums.length-1){
                    nums[j++] = nums[i+1];
                }
                cnt = 1;
            }
       }
       return j; 
    }
}