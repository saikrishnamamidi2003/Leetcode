class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length == 1) return 1;
        int j = 0;
        int i = 1;
        for(i = 1; i< nums.length; i++){
            if(nums[i] != nums[i-1]){
                nums[j++] = nums[i-1];
            }
        }
        i -= 1;
            nums[j++] = nums[i];
                
        return j;
    }
}